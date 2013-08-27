--- 
layout: post
title: "Usá site:tudominio para encontrar problemas"
permalink: /2009/08/05/usa_sitetudominio_para_encontrar_problemas/
author: Jorge Grippo
date: 2009-08-05 15:19:33
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- seo

---
<!-- 101 -->
El <a href="http://www.google.com/support/websearch/bin/answer.py?answer=136861">comando site</a>, sirve para restringir la búsqueda en Google a un dominio o subdominio en particular. Es decir, en vez de buscar en toda la web, busca solo en el dominio especificado. Por ejemplo, ingresando en el buscador lo siguiente:<div><br /></div><div><a href="http://www.google.com/search?q=auto+site:grippo.com.ar">auto site:grippo.com.ar</a>&nbsp;</div><div><br /></div><div><br /></div>

<!--more-->
<div>Sólo busca "auto" en el dominio grippo.com.ar. Ahora bien, si sólo busco:</div><div><br /></div><div><a href="http://www.google.com/search?q=site:grippo.com.ar" style="text-decoration:underline;">site:grippo.com.ar</a></div><div><br /></div><div>entonces obtengo información interesante. En este instante me dice que el index de Google tien&nbsp;<b>2.260.000</b>&nbsp;páginas de&nbsp;<b>grippo.com.ar</b>. Ese dato es muy variable de todas maneras, ya que Google siempre está mezclando versiones viajes del sitio con versiones más nuevas, asique oscila mucho. De todas maneras, mirando los resultados (te recomiendo entrar en preferencias y ajustar el valor a 100 resultados por página), siempre se encuentran problemas a simple vista.&nbsp;</div><div><br /><div>Por ejemplo, páginas indexadas que no deberían estar indexadas, como ser plantillas o documentos, o listings de directorios que quedaron dentro del espacio virtual de la web. En la próxima imagen, el segundo resultado es una versión en japonés de la documentación de Apache, que descubrí indexada hace más de un mes, y todavía no lo logro:</div><div><br /><a href="http://www.flickr.com/photos/grippo/3792179701/" title="SEO problem por jorge_grippo, en Flickr"><img src="http://farm4.static.flickr.com/3441/3792179701_ce4bab1df4_o.png" width="567" height="318" alt="SEO problem" /></a></div><div><br /></div><div>Google había indexado otras 100 páginas en japonés, correspondientes a la documentación de Apache. Este otro ejemplo es muy triste, por alguna razón faltaban los index.html:</div><div><br /><a href="http://www.flickr.com/photos/grippo/3793009118/" title="SEO problem por jorge_grippo, en Flickr"><img src="http://farm3.static.flickr.com/2458/3793009118_c683b4e00b_o.png" width="564" height="401" alt="SEO problem" /></a></div><div><br /></div><div>Muchas veces así se indexan cartas de alguna novia/o al/la cual ya no seguimos, o alguna foto comprometedora que sin querer quedó al descubierto. El comando <b>"site:"&nbsp;<span class="Apple-style-span" style="font-weight:normal;">viene en nuestra ayuda para descubrir todos esos problemas a simle vista.&nbsp;</span></b></div><div><br /></div><div>¿Por qué problema y por qué SEO? Porque muchas veces con este comando site: descubrimos duplicación de contenidos. La mayoría de los programadores somos vagos, y cuando empezamos algun proyecto nuevo, tratamos de basarnos en alguno anterior que sea parecido, abusando del copiar y pegar. A medida que unos proyectos avanzan, otros siempre quedan en la cola. Mientras están en la cola, podrían estar siendo indexados por Google. Eso &nbsp;me pasó y acabo de descubrir 100 mil urls indexadas duplicadas. OMG.</div><div><br /></div><div>Mi solución siempre que quiero hacer desaparecer algo de Google, consiste en:</div><div><br /></div><div><ol><li>Hacer que el http server responda "410 Gone" a todo request que quiero eliminar del index de Google.</li><li>Ir a <a href="http://www.google.com/webmasters/tools/">Webmasters Tools,</a> e incrementar la velocidad de crawling al máximo.</li></ol><div>No ser canuto: probá ahora con tus dominios y comentá qué macana te mandaste!</div><div><br /></div></div><div><br /></div></div>


