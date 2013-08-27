--- 
layout: post
title: "Facebook Login para sitios web dura 60 días"
permalink: /2012/12/12/facebook-login-para-sitios-web-dura-60-dias/
author: Jorge Grippo
date: 2012-12-12 16:30:56
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- Programming
- facebook

---
<!-- 423 -->
Estos son los datos pasados por Facebook a una App, luego de hacer Facebook Login, a través de un parámetro llamado <em>signed request</em>:
<pre>
  'fb_expires' => 1360513406,
  'fb_issued_at' => 1355329406,
</pre>

Los valores est&aacute;n expresados en Unix time (<a href="http://en.wikipedia.org/wiki/Unix_epoch">Unix epoch</a>), o sea cantidad de segundos desde 1 de enero de 1970. La diferencia entre <tt>fb_expires</tt> menos <tt>fb_issued_at</tt> son <tt>5184000</tt> segundos, o sea, 60 d&iacute;as.



