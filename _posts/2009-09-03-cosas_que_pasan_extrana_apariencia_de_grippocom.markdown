--- 
layout: post
title: "Cosas que pasan, extraña apariencia de Grippo.com"
permalink: /2009/09/03/cosas_que_pasan_extrana_apariencia_de_grippocom/index.html
author: Jorge Grippo
date: 2009-09-03 20:10:26
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias

---
<!-- 105 -->
Una de las leyes de Murphy dice, que una serie de eventos fallará en la peor combinación posible. Acaban de avisarme (<a href="http://www.facebook.com/home.php#/sebastian.querelos?ref=nf">Sebastián Querelos</a> y <a href="http://twitter.com/gabrielamaidana">Gabriela Maidana</a>), que Grippo.com aparecía con esta extraña apariencia:<br /><br />
<a href="http://www.flickr.com/photos/grippo/3885810312/" title="Extraña versión de Grippo.com por jorge_grippo, en Flickr"><img src="http://farm4.static.flickr.com/3664/3885810312_94b496f51c.jpg" alt="Extraña versión de Grippo.com" height="414" width="500" /></a>
<br /><br />¿Qué pasó?<br /><br />Lo primero que pensé fue esto: ¨me hackearon el sitio, por primera vez luego de 13 años".<br /><br />Pero no.<br />

<!--more-->
Yo mismo fuí el culpable. La respuesta corta es que en el archivo de
zona del DNS de grippo.com, en vez de poner un CNAME apuntando al load
balancer de Grippo.com, puse una direccion IP (A). Mi proveedor,
Amazon, le cambió la IP al load balancer, y ahora el load balancer de
otro, está usando la IP que era de Grippo.com.<br /><br />Como me siento
muy culpable, no quisiera ahora también agregar este otro detalle: mi
proveedor de DNS primario, tarda horas en propagar cada cambio. Asique
por más que el arreglo ya está realizado, va a tardar horas en verse
online.<br /><br />Lecciones aprendidas:<br /><br /><ul><li>usar un proveedor de DNS primario que te deje propagar un cambio en minutos, no hras</li><li>usar un proveedor de DNS que te permita modificar tus registros de acuerdo a tus necesidades, no las de ellos</li></ul>Por
razones históricas, los DNS primarios de mis dominios, estaban en
www.mydomain.com, pero ahora es momento de buscar un proveedor
profesional. Ya me habían recomendado ultradns.net, pero me demoré más
de la cuenta en seguir esa recomendación.<br /><br /><b>Agregado el 5 Sep:</b><br /><br />Ahora entiendo mejor.<br /><br />Yo queria tener urls del tipo http://grippo.com/aviso/1234 y http://grippo.com/buscar/departamentos+en+mar+del+plata, es decir usar solo el dominio, sin www. Mi proveedor de DNS primario (www.mydomain.com),&nbsp; es un tipo de proveedor que permite poner CNAME del dominio completo (sin subdominio). Entonces siempre pensé que era legal. Pero en realidad yo no estaba entendiendo claramente qué significaba. Poner un CNAME en el dominio, si tu DNS primario te lo permite, es útil sólo cuando el dominio es efectivamente un alias 100% del host de destino del CNAME. De hecho, la primera semana de subirme a Amazon AWS, lo que hice fue poner algo asi como:<br /><br />grippo.com IN CNAME grippo-2014187730.us-east-1.elb.amazonaws.com.<br /><br />ya que ese es el nombre de mi load balancer. Al hacer eso, me quedé sin mails @grippo.com, porque no tenía caso haber configurado registros MX en mi archivo de zona de grippo.com, ya que ese CNAME&nbsp; invalidaba todo el resto. Tuve que averiguar entonces la IP de grippo-2014187730.us-east-1.elb.amazonaws.com, que era una hace unos dias, y es otra ahora, y convertir ese registro en<br /><br />grippo.com IN A 123.45.67.89<br /><br />Eso anduvo bien hasta que Amazon le cambio la IP a grippo-2014187730.us-east-1.elb.amazonaws.com. Eso trajo la pantalla extraña de esta historia.&nbsp; Ahora bien, siendo que uso un load balancer, ahora entiendo que está bien que Amazon me aconseje usar un CNAME apuntando a grippo-2014187730.us-east-1.elb.amazonaws.com, ya que eso hace que su load balancer sea más elástico, es decir que pueda ser redundante en caso de fallas, y derivar trafico por otros dispositivos, cuando el dispositivo original falla o simplemente para organizar mejor su trafico y dar un mejor servicio. Eso hace que los load balancers como grippo-2014187730.us-east-1.elb.amazonaws.com vayan ocasionalmente cambiando la direccion IP.<br /><br />Por lo tanto, mi idea de usar urls del tipo http://grippo.com/aviso/1234 no funcionaría junto con load balancer de Amazon. Debería usar mi propio load balancer, cosa que considero descartar, apostando a que Amazon va a manejar mejor mi load balancer que yo mismo, que pretendo deligarme de mas tareas, antes que tomar otras nuevas.<br /><br />Nuevas lecciones aprendidas:<br /><br /><ul><li>Usar CNAME de todo el dominio, solo es viable cuando no hay otros servicios como ser mails en el mismo dominio.</li><li>Sólo las urls del tipo http://subdominio.midominio.com/aviso/1234 funcionarían con Elastic Load Balancer, por lo que las urls del tipo http://grippo.com/aviso/1234 no son viables sin comprometer el servicio en momentos de sobrecarga, o sin sobrecargar al webmaster con una nueva tarea de administrador de load balancer</li></ul><br />


