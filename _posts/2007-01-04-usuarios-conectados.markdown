--- 
layout: post
title: "Usuarios conectados"
permalink: /2007/01/04/usuarios-conectados/
author: Jorge Grippo
date: 2007-01-04 02:30:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias

---
<!-- 25 -->
<span style="font-weight:bold;">¿Cómo contamos los usuarios conectados, que ahora aparecen en cada una de las páginas dentro del dominio </span><a style="font-weight:bold;" href="http://www.grippo.com.ar/">grippo.com.ar?</a>

Cada vez que un navegador (<a href="http://en.wikipedia.org/wiki/User-agent">user-agent</a>) capaz de ejecutar <a href="http://en.wikipedia.org/wiki/Javascript">JavaScript</a>,  <a href="http://en.wikipedia.org/wiki/HTTP">lee</a> una página en el dominio <a href="http://www.grippo.com.ar">grippo.com.ar</a>,   se archiva en una base de datos una identificación del usuario, que consiste en un cookie implementado a través del módulo de Apache <a href="http://httpd.apache.org/docs/2.0/mod/mod_usertrack.html">usertrack</a> cuyo nombre por defecto es "Apache", más la dirección IP del usuario (REMOTE_ADDR), más el nombre del user-agent. La concatenación de esos tres elementos es necesaria, porque hay algunos user-agents que tienen deshabilitado el manejo de cookies, asique sin los otros dos elementos, difícilmente podríamos identificar en forma única, a un cliente en una red privada donde muchos clientes acceden a internet a través de una sola IP pública, como es el caso típico en oficinas y universidades.

Como en <a href="http://www.grippo.com.ar/">grippo.com.ar</a> tenemos   más de 30 requests por segundo, el número "<span style="font-weight:bold;">conectados</span>" que aparece en cada página en el border superior derecho nunca está quieto, siempre está incrementándose.

Una vez cada 60 segundos, eliminamos todos los registros que han cumplido 20 minutos. De esta manera mantenemos una cuenta de "conectados" tomando como ventana de tiempo esos 20 minutos únicamente.

¿Te parece que es útil esa información en cada página, o completamente irrelevante?
¿Pensás que se podría haber hecho mejor de otra manera? ¿Cual?

Gracias por participar!

