--- 
layout: post
title: "No puedo usar urls cortas y ELB al mismo tiempo"
permalink: /2009/09/05/no_puedo_usar_urls_cortas_y_elb_al_mismo_tiempo/
author: Jorge Grippo
date: 2009-09-05 03:59:41
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias

---
<!-- 106 -->
ELB = Elastic Load Balancer.<br /><br />El jueves pasado, cuando iba a entrar a ver <a href="http://www.imdb.com/title/tt0361748/">Bastardos sin gloria</a>, chequeé por un instante cómo funcionaba grippo.com en mi iphone, y <a href="http://blog.grippo.com/blog/2009/09/cosas-que-pasan-extrana-apariencia-de-grippocom.html">encontré otro sitio en su lugar</a>.<br /><br />Ahora entiendo mejor, por qué pasó eso, y cuán equivocado estaba yo con respecto a los registros CNAME y a las direcciones IP de ELB.<br /><br /><br />

<!--more-->
Yo queria tener urls del tipo
http://grippo.com/aviso/1234 y
http://grippo.com/buscar/departamentos+en+mar+del+plata, es decir usar
solo el dominio, sin www. Mi proveedor de DNS primario
(www.mydomain.com),&nbsp; es un tipo de proveedor que permite poner CNAME
del dominio completo (sin subdominio). Entonces siempre pensé que era
legal. Pero en realidad yo no estaba entendiendo claramente qué
significaba. Poner un CNAME en el dominio, si tu DNS primario te lo
permite, es útil sólo cuando el dominio es efectivamente un alias 100%
del host de destino del CNAME. De hecho, la primera semana de subirme a
Amazon AWS, lo que hice fue poner algo asi como:<br />
<br />
grippo.com IN CNAME grippo-2014187730.us-east-1.elb.amazonaws.com.<br />
<br />
ya
que ese es el nombre de mi load balancer. Al hacer eso, me quedé sin
mails @grippo.com, porque no tenía caso haber configurado registros MX
en mi archivo de zona de grippo.com, ya que ese CNAME&nbsp; invalidaba todo
el resto. Tuve que averiguar entonces la IP de
grippo-2014187730.us-east-1.elb.amazonaws.com, que era una hace unos
dias, y es otra ahora, y convertir ese registro en<br />
<br />
grippo.com IN A 123.45.67.89<br />
<br />
Eso
anduvo bien hasta que Amazon le cambio la IP a
grippo-2014187730.us-east-1.elb.amazonaws.com. Eso trajo la pantalla
extraña de esta historia.&nbsp; Ahora bien, siendo que uso un load balancer,
ahora entiendo que está bien que Amazon me aconseje usar un CNAME
apuntando a grippo-2014187730.us-east-1.elb.amazonaws.com, ya que eso
hace que su load balancer sea más elástico, es decir que pueda ser
redundante en caso de fallas, y derivar trafico por otros dispositivos,
cuando el dispositivo original falla o simplemente para organizar mejor
su trafico y dar un mejor servicio. Eso hace que los load balancers
como grippo-2014187730.us-east-1.elb.amazonaws.com vayan ocasionalmente
cambiando la direccion IP.<br />
<br />
Por lo tanto, mi idea de usar urls
del tipo http://grippo.com/aviso/1234 no funcionaría junto con load
balancer de Amazon. Debería usar mi propio load balancer, cosa que
considero descartar, apostando a que Amazon va a manejar mejor mi load
balancer que yo mismo, que pretendo deligarme de mas tareas, antes que
tomar otras nuevas.<br />
<br />
Nuevas lecciones aprendidas:<br />
<br />
<ul><li>Usar CNAME de todo el dominio, solo es viable cuando no hay otros servicios como ser mails en el mismo dominio.</li><li>Sólo
las urls del tipo http://subdominio.midominio.com/aviso/1234
funcionarían con Elastic Load Balancer, por lo que las urls del tipo
http://grippo.com/aviso/1234 no son viables sin comprometer el servicio
en momentos de sobrecarga, o sin sobrecargar al webmaster con una nueva
tarea de administrador de load balancer</li></ul>


