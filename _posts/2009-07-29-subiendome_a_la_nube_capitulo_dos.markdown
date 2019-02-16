--- 
layout: post
title: "Subiéndome a la nube, capítulo dos"
permalink: /2009/07/29/subiendome_a_la_nube_capitulo_dos/index.html
author: Jorge Grippo
date: 2009-07-29 18:18:37
og_image: http://farm4.static.flickr.com/3585/3769568171_bb96ac89b9_o.png
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- Cloud Computing

---
<!-- 98 -->
A principios de este mes, publiqué el <a href="/2009/07/03/subiendome_a_la_nube_capitulo_uno/index.html">capítulo uno</a>, 
donde mostraba lo sencillo que fue migrar todos los elementos estáticos a S3 + CloudFront, el competitivo costo mensual 
y el upgrade que significa en tecnología pasar a servir imégenes, css, js y demás, desde una content delivery network, 
archivando los elementos en una plataforma indestructible, quasi-eterna y 100% disponible.

Ahora bien, una cosa son elementos estáticos, y otra cosa son páginas dinámicas. 
Hoy les voy a mostrar cómo va la migración de la aplicación y el tipo de setup redundante que es posible / mandatorio hacer.

<!--more-->
Esta es la consola AWS de Amazon:

<img itemprop="image" title="{{ page.title }}" alt="{{ page.title }}" src="{{ page.og_image }}" width="100%" class="img-responsive img-thumbnail" />
  
En este dashboard vemos que ya tengo 2 running instances. Cada instancia es un server completo, con 1.7GB RAM, 
procesador Opteron de 2007, 160GB en disco. Uno de esos servers es solo para MySQL. El otro es un worker con 
Apache 2 + mod_perl 2. El plan es agregar un segundo servidor MySQL que haga replicación. Y agregar un 
segundo apache para atender los requests HTTP, balanceados con un ELB, ó Elastic Load Balancer 
en la jerga de Amazon. Cada una de las instancias (recuerden, cada instancia es un server), 
tiene montado por nfs un volumen externo, donde los datos importantes de la aplicación, 
incluyendo las databases MySQL, existen en un dispositivo redundante y externo a las instancias, 
llamado Elastic Block Store o EBS. Esto es importante porque si la instancia se corrompe, 
nunca se recuperarían los datos almacenados en su propio hard disk, los datos sensibles 
deben almacenarse fuera de la instancia.

En resumen:
<ul><li>frente a los usuarios solo está el load balancer, que es un servicio que pinguea cada 30 segundos cada apache para ver si está vivo y balancea la carga entre tantas instancias como le pongamos.</li>
<li>detrás del load balancer hay n cantidad de instancias, cada una corriendo apache + mod_perl, en mi caso con dos instancias puedo servir mucho mas de mis 3 millones de uniques mensuales</li>
<li>cada aplicación realiza inserts, updates y deletes en un servidor master MySQL (que corre en su propia instancia) y todos los selects van al slave (que por supuesto corre en una instancia separada), en total hasta aca tenemos 4 instancias corriendo</li><li>todos los datos (templates, logs, bases de datos), existen en una unidad de storage externo (EBS)</li>
<li>en mi repositorio S3 tengo imágenes del setup particular del OS de cada rol de servidor. En mi caso uso Debian. A cada imagen la llaman AMI (Amazon Image) y contiene una imagen binaria que aplicada a una instancia nueva, instala no solo el OS sino todas las decenas de paquetes y configuraciones específicas que se necesitan para asignarlo un rol al server. Asi tengo un AMI para servidor MySQL master, otro para servidor MySQL slave, y otro para servidor Apache + mod_perl. En caso de necesitar más apaches, simplemente lanzo una nueva instancia (launch instance), y le aplico el AMI correspondiente a apache con mod_perl. Todo el proceso implica dos clicks y esperar como 90 segundos en total. Al finalizar ese procedimiento, tengo un nuevo apache que puedo agregar al load balancer y en minutos puede estar sirviendo mas requests.</li></ul>

De la misma manera, si se corrompe la instancia que corre alguno de los servidores MySQL, puedo en minutos tener otro con identico setup. Como las tablas de las bases de datos se montan en el volumen externo "indestructible", lo que puede ser una verdadera catástrofe, puede pasar inadvertido si se usan otras herramientas de las que voy a hablar en el futuro, que combinan un monitor con el API de AWS, y que permite automatizar el lanzamiento de instancias nuevas en caso de necesidad.

Como yo vengo de hacer todo con el destornillador en la mano, esa mejora la dejo para más adelante, aunque es inevitable caer en automatizar todo al punto de por ejemplo, mantener dos apaches de lunes a viernes, pero sabados y domingos cuando la demanda baja, mantener solo un apache y pagar menos.

Bueno, ¿cuanto cuesta todo esto? Como dije en la nota anterior, mi interés en compartir esto es que aún habiendo conocido AWS hace años, siempre me pregunté efectivamente cuán viable era para un sitio como grippo.com. Pues bien, es mucho más viable que mantenerlo en un datacenter de clase mundial en Buenos Aires, eso se los puedo asegurar, porque mientras esté en el datacenter de clase mundial, sea en Buenos Aires, Los Angeles, Londres o donde sea, siempre llega el momento fatídico del <a href="2009/07/29/downtime_de_clasificados_grippo/index.html">downtime, como me pasó hoy mismo</a>, o llega el momento que con destornillador en la mano tenemos que cambiar una fuente que dijo basta, o agregar mas pizzas al horno (sevidores en el gabinete).

<img itemprop="image" title="{{ page.title }}" alt="Factura mensual AWS" src="http://farm3.static.flickr.com/2529/3770435402_749e23765a.jpg" width="100%" class="img-responsive img-thumbnail" />

Si bien falta un día o dos para cerrar el mes de julio, con aproximadamente USD 100, estoy cubriendo toda la operacion de storage S3 (22 centavos) + CloudFront (mi propia CDN para 30 y pico millones de requests por 38 dólares) + EC2 (Elastic Computing Cloud, 60 dolares más). EC2 incluye el uso de dos instancias por el momento. Estoy a punto de lanzar dos instancias nuevas, así para finales de agosto puedo mostrar el costo total de infraestructura de grippo.com. El desglose de EC2 es muy pormenorizado:

<img itemprop="image" title="{{ page.title }}" alt="Costo de EC2" src="http://farm3.static.flickr.com/2552/3769650571_92a8f05143_o.png" width="100%" class="img-responsive img-thumbnail" />

El primer item que figura con USD500, es para reservar una instancia. Si la instancia no está reservada, pago USD 0,10 por hora. Eso es lo mejor para instancias lanzadas por demanda, digamos una aplicacion que tiene mucho trafico de 9 a 17 de lunes a viernes, en esos momentos usamos instancias sin reserva y pagamos 0,10 por hora. En mi caso, necesito una base de 4 instancias para mi setup, puedo reservar 4 instancias a USD500 cada una por tres años, y durante esos tres años, pago USD 0,03 por hora, el costo de cada server en este caso es de menos de USD 500 anual! Sí leíste bien, anual. Si no es reservado, pagás algo más de USD 700 anual, claro en el caso de que lo estes usando todo el tiempo, que no sería el caso jamás, porque en ese caso lo convertirías a reservado.

Luego tengo USD 32 por mil y tantas horas de instancias a 0,03. Esas son las dos instancias que ya tengo corriendo, una con MySQL, la otra con Apache.

Luego viene el costo por bandwidth. Debo aclarar que tengo migrados sitios pequeños, que en su conjunto pueden tener 5 mil usuarios por día, como por ejemplo <a href="http://da.com.ar">da.com.ar</a>, <a href="http://grippo.co.il">grippo.co.il</a>, <a href="http://grippo.es">grippo.es</a>, <a href="http://horoscopo.grippo.com.ar">horoscopo.grippo.com</a>. Asique el bandwidth me cuesta centavos. El bandwidth que va a consumir el mes que viene puede llegar a 50GB mas o menos, la espectativa de costo de este item no superaría los USD 10.

Luego viene EBS, que es el storage externo, attacheable a las instancias. Es decir donde se guardan todos mis datos sensibles, incluyendo las bases de datos y de la que puedo programar un backup instantáneo que se realice cada hora si quiero, y que se almacene en mi repositorio S3. Sólo por esto conviene pasarse a AWS. Sólo por EBS y Snapshots.

Luego vienen las EIPs, elastics IP, que si las uso, no me las cobran. Sólo me cobrarían USD 2 mensual si las reservo pero no las asigno a ninguna instancia.

Luego viene CloudWatch que es un monitor que permite automatizar las respuestas a la demanda, que hablaremos en un futuro cercano.

Luego viene el load balancer, que cuesta 18USD mensual. Como en mi setup los apaches pueden responder a todas las aplicaciones, uso solo un load balancer, y pongo detras tantos apaches como sean necesarios de acuerdo a la demanda.

Espero que no sea muy confuso esta vez, hay muchos conceptos aqui adentro, cada uno voy a tratar de explicarlos por separado, pero l<b>o central aquí es que grippo.com siendo uno de los 10 sitios nacionales con mayor tráfico y difícilmente llegue a superar los USD 200 mensuales en agosto, migrando el 100% de los servicios a Amazon</b>.

Dicho de otra manera: cualquier start up podría reservar USD 100 mensuales y tener un setup indestructible y escalable al nivel de google, yahoo o amazon. Quizás era un tema que podía incidir mucho más en el presupuesto mensual, pero ya no.

Dicho de otra manera: qué se puede hacer con USD200 en un datacenter en Argentina?

Dicho de otra manera: cuál es el presupuesto de servidores más conectividad de los otros 10 sitios nacionales de mayor tráfico? Creo que cada uno se podría optimizar.

En cualquier caso, aclaro que no soy socio comercial de Amazon, simplemente su AWS es genial, y yo tardé como 4 años en comprobarlo.

Feedback please!


