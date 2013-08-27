--- 
layout: post
title: "Subiéndome a la nube, capítulo uno"
permalink: /2009/07/03/subiendome_a_la_nube_capitulo_uno/
author: Jorge Grippo
date: 2009-07-03 22:59:45
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias
- AWS
- CloudFront
- S3

---
<!-- 88 -->
Este mes mi proveedor de housing me aplicó un 150% de aumento al costo del servicio. Aparte me aplicarán topes al consumo del ancho de banda. Al tener mis equipos en ese data center desde hace 8 años esperaba que un reajuste de tarifas no sería tan dramático nunca, pero yo soy muy ingenuo. Además el servicio cambiará para peor, aplicándose desde ahora topes en los consumos que antes no existían. Punto.<div><br /></div><div>Concidentemente, comencé hace un mes y días a estudiar cómo funciona a la estructura computacional de Amazon, conocida como <a href="http://aws.amazon.com">Amazon Web Services</a> (AWS). Digámosle "la nube". &nbsp;&nbsp;</div>

<!--more-->
<div>Mi primer ejercicio fue tomar el servicio más sencillo de implementar. Surgió que lo más sencillo era implementar S3 (Simple Storage Service) como sistema de almacenamiento de los archivos estáticos de Grippo.com - http://static.grippo.com. Me tomó simplemente una hora mover todos los archivos estáticos a la plataforma S3. Luego ví que Amazon tiene una CDN ó Content Delivery Network, que es un sistema como Akamai, que acerca esos archivos estáticos a los cachés de los proveedores de internet de los millones de usuarios de Internet a nivel global, tecnología que todos los sitios gigantes de Internet están obligados a utilizar. Ahora se me hizo disponible también a mí. Otra hora más y pude conectar el nombre del host en mi propio dominio http://static.grippo.com, con la CDN de Amazon, a la que llaman con el bonito nombre de CloudFront. El origen de los datos de CloudFront es el repositorio S3 que ya había creado anteriormente. Asique, en dos horas, tuve todos mis archivos estáticos (imágenes, style sheets, scripts JS, iconos), en la nube de Amazon y servidos a través de su CDN bajo mi propio nombre de dominio. Esto lo hice al finalizar mayo.&nbsp;</div><div><br /></div><div>¿Cuánto cuesta utilizar S3 con CloudFront? Calcular por adelantado es un poco complejo a primera vista. Ahora que hace más de un mes, el sistema tarifario de Amazon produce mucha satisfacción como cliente, cosa que no siento con mi proveedor de housing local. Amazon cobra por varios items por separado: cantidad de storage utilizado, bando de ancha utilizado y cantidad de requests servidos. Mis cálculos preliminares fueron que gastaría unos 60 dólares por mes. Pero tenía dudas. Ahora que cerró el mes de junio, puedo mostrarles con gran satisfacción la primera liquidación de un mes completo de S3 más CloudFront de Grippo.com en Amazon: </div><div><br /></div><div>
<a href="http://www.flickr.com/photos/grippo/3685574928/" title="Consumos 2009-06 en AWS por jorge_grippo, en Flickr"><img src="http://farm4.static.flickr.com/3583/3685574928_75930d3bf8.jpg" width="481" height="500" alt="Consumos 2009-06 en AWS" /></a>
<div><br /></div><div>De esta imagen sólo presten atención a los títulos <b>Amazon Simple Storage Service </b>que totaliza USD 0,16, o sea 16 centavos de dólar, &nbsp;y <b>Amazon CloudFront</b> por USD 48,80.</div><div><br /></div><div>Tengan en cuenta que para los costos que yo estoy acostumbrado a pagar en Buenos Aires, esos precios son muy inferiores. Tengan también en cuenta, que la tecnología que me ofrece Amazon, con mis datos guardados en forma redundante, monitoreado por un ejército de ingenieros y distribuidos en su CDN, no está al alcance de muchos hoy en día en todo el mundo. Para los <a href="http://farm4.static.flickr.com/3583/3685574928_deebf803dc_o.png">chicatos</a>, les cuento: con 96 mil GB de data transfer, y 33 millones de requests.</div><div><br /></div><div><b>Conclusión</b>: mejor subirse a la nube que quedarse en la tierra.</div><div><br /></div><div>Próximo capítulo: cómo subo el application server a la nube y cómo se hace load balancing en la nube. Ah! Les adelanto el costo por server equivalente a Pentium 4 Dual Core, con 1,7GB RAM y 160GB disco fijo: USD 40 mensual. Hasta la próima.</div><div><br /></div><div><br /></div><div><br /></div><div><br /></div></div>


