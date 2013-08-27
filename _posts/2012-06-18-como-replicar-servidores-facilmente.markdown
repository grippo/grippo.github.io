--- 
layout: post
title: "Replicar fácilmente servidores en la nube"
permalink: /2012/06/18/como-replicar-servidores-facilmente/
author: Jorge Grippo
date: 2012-06-18 16:59:58
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- AWS
- EC2
- Programming
- sysadmin

---
<!-- 328 -->
Se da el caso de que tarde o temprano vas a tener que hacer el setup de otro server igualito a ese que te llevó dos semanas armar, configurar, probar, testear hasta que finalmente estuviste contento con él. ¿Cómo replicar fácilmente ese setup que te llevó horas y horas, sencillamente?:

<!--more-->En el servidor original:

<code>dpkg --get-selections &gt; mi-setup-original.txt</code>

Una vez que instalaste el OS en el nuevo server (idealmente Ubuntu o Debian), entonces:

<code>dpkg --set-selections &lt; mi-setup-original.txt
dselect
</code>
En este punto tendrás exactamente el mismo software instalado en el server nuevo que en el original. Luego pasás las configuraciones particulares de cada componente. Listo!

