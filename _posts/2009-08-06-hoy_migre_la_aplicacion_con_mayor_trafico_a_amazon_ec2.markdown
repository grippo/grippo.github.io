--- 
layout: post
title: "Hoy migré la aplicación con mayor tráfico a Amazon EC2"
permalink: /2009/08/06/hoy_migre_la_aplicacion_con_mayor_trafico_a_amazon_ec2/
author: Jorge Grippo
date: 2009-08-06 16:30:11
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias

---
<!-- 103 -->
Un sueño hecho realidad, y muchas horas despierto, esperando que el desastre ocurra en cualquier momento. Pero no ocurrió nada grave. La aplicación con mayor tráfico (Clasificados Grippo), fue migrada anoche con éxito a Amazon EC2.<div><br /></div><div><br /></div>

<!--more-->
<ol><li>Dispuse un redirect de clasificados.grippo.com.ar a grippo.com que es el dominio donde se sirven ahora las páginas, para tener el mínimo de downtime posible. La aplicación estuvo fuera de línea solo 15 minutos que es lo que tardó en migrarse la database de un lugar al otro. Comprimido 0,4GB, descomprimido 2,2GB.</li></ol><div><br /></div><div>La capacidad tanto del MySQL server, como de los application servers (dos detrás de un load balancer) era en teoría equivalente a un procesador Intel P4 dual core, u Opteron del 2007. Así dice la doc. de Amazon. Tienen 1.7GB de RAM. Son tamaño small, luego hay medium y large. Luego hay medium high performance y large high performance, yo tengo 3 small. Asique tenía mis dudas respecto a cómo iban a responder cuando llegue el pico de 30 requests por segundo.</div><div><br /></div><div>Finalmente, responde muy bien, y ahora puedo decir que podrian absorber hasta 300 resquests por segundo los application servers, aunque el MySQL server voy a tener que partirlo en un master donde hacer los inserts y updates, y un slave en principio para los selects para estar tranquilo y permitir que el tráfico pueda crecer sin preocupaciones. Luego ante mayor demanda la estrategia es darle mas potencia al master y agregar más slaves para los selects.</div><div><br />
<a href="http://www.flickr.com/photos/grippo/3796189788/" title="Imagen 13 por jorge_grippo, en Flickr"><img src="http://farm3.static.flickr.com/2585/3796189788_725a24fdfc_o.png" width="596" height="835" alt="Imagen 13" /></a>
</div><div><br /></div><div>así se ven los top en los 3 servers que están en servicio en este momento. Tengo instalado munin-node que es como MRTG pero mas sencillo de instalar, que va recolectando el usage de los recursos y me los muestra en gráficos acumulando información cada 5 minutos. Por ejemplo el uso de la CPU, que debe estar por debajo de 80 el 95 por ciento del tiempo (system + user + nice) .</div><div><br />
<a href="http://www.flickr.com/photos/grippo/3795449015/" title="CPU Usage por jorge_grippo, en Flickr"><img src="http://farm3.static.flickr.com/2621/3795449015_9135eaed7a_o.png" width="499" height="355" alt="CPU Usage" /></a>
</div><div><br /></div><div>Conclusión: muy contento porque todo ha salido bien y no hay que dar marcha atrás. Muy pronto: adiós final al tradicional datacenter.</div><div><br /></div><div><br /></div>


