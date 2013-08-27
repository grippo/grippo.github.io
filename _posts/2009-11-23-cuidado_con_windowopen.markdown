--- 
layout: post
title: "Cuidado con window.open()"
permalink: /2009/11/23/cuidado_con_windowopen/
author: Jorge Grippo
date: 2009-11-23 17:12:25
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- directrices para webmasters
- seo

---
<!-- 113 -->
De casualidad me enteré el viernes pasado que Google me había indexado decenas de miles de páginas inútiles, cuya indexación nunca me había preocupado porque no había links <i>normales</i> en ninguna parte, sino simplemente llamadas con Javascript, específicamente la famosa <tt>window.open()</tt>.<br /><br />Como Google solamente indexaba links normales insertados con el <a href="http://www.w3.org/TR/html401/struct/links.html#h-12.2">tag <b>A</b></a>, los links codificados con <a href="http://docs.sun.com/source/816-6408-10/window.htm#1202731"><tt>window.open</tt></a> nunca fue una preocupación.<br /><br />

<!--more-->
Sin embargo, como sucede a diario, un usuario pidió que una página sea removida, no solo de Clasificados Grippo sino también de Google. Como es rutina, sin discutir ni mu, elimino inmediatamente el contenido en Grippo.com y luego usando <a href="https://www.google.com/webmasters/tools/home?hl=es">Google Webmasters Tools</a>, pido la eliminación también de la página en el index de Google. Pero esta vez, se trataba de una página tipo tooltip que se usa ordinariamente para documentar los campos en un formulario, a la que le pasaba como parámetro el nombre de un usuario.<br /><br /><a href="http://www.grippo.com/docs/ads_visitas_recibidas.htm?614">Ejemplo de una página cuya indexación es inútil</a>.<br /><br />Se había escuchado sin muchas precisiones desde hace unos meses que GoogleBot ahora podía entender <i>cierto Javascript</i>. Bueno encontré un ejemplo vivo de que estas páginas fueron descubiertas por GoogleBot en una llamada window.open y no en un link normal con el tag A. Si bien tiene sentido, y además conociendo como se ha comportado GoogleBot en otras oportunidades, esta manera de crawlear la web debe estar en etapa experimental, concretamente en mi sitio, de pronto veo decenas de miles de páginas inútiles, indexadas con contenido duplicado y me pregunto cuánto puede estar influyendo negativamente en la indexación de tantas otras páginas con contenido dentro del mismo sitio.<br /><br />Finalmente la receta que usé fue insertar en esas páginas un meta tag:<br /><br /><pre>&lt;<span class="start-tag">meta</span><span class="attribute-name"> name</span>=<span class="attribute-value">"robots" </span><span class="attribute-name">content</span>=<span class="attribute-value">"noindex"</span>&gt;</pre><br /><b>Consejo</b>: revisen si sus páginas linkeadas con window.open deberían ser "noindexadas" y hagan como hice yo.<br /><br /><br />


