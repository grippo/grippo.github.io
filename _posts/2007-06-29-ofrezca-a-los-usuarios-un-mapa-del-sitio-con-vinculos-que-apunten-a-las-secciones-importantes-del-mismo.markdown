--- 
layout: post
title: "Ofrezca a los usuarios un mapa del sitio con vínculos que apunten a las secciones importantes del mismo."
permalink: /2007/06/29/ofrezca-a-los-usuarios-un-mapa-del-sitio-con-vinculos-que-apunten-a-las-secciones-importantes-del-mismo/index.html
author: Jorge Grippo
date: 2007-06-29 01:07:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- buscador google
- diseño web
- pagerank
- seo

---
<!-- 40 -->
El título de este artículo, corresponde a la segunda directriz de la página de <a href="http://www.google.com/support/webmasters/bin/answer.py?answer=35769&amp;hlrm=es">directrices para webmasters</a> de Google, en el apartado <b>Directrices de diseño y contenido</b>, la que en su versión en inglés dice: <blockquote>Offer a site map to your users with links that point to the important parts of your site. If the site map is larger than 100 or so links, you may want to break the site map into separate pages.</blockquote>y en español es: <blockquote>Ofrezca a los usuarios un <span style="font-style:italic;">mapa del sitio</span> con vínculos que apunten a las secciones importantes del mismo. Si el mapa contiene más de 100 vínculos, puede dividirlo en varias páginas.</blockquote><h4>Qué es el <em>mapa del sitio</em>?</h4><b>Mapa del sitio</b> (en inglés <em>sitemap</em>) es una página de tu sitio donde figuran links a todas las páginas importantes de tu sitio. No menos importante que el mapa del sitio, es incluir un link al mapa del sitio en la página principal del sitio.

Se dice que una característica de la web es que siempre está rota o rompiéndose o a punto de romperse. Por medio de esta directriz, se trata de evitar uno de los problemas clásicos de la web: si una página se encuentra desconectada de otras, es decir, ninguna otra página apunta hacia ella, no forma parte de la web (<span style="font-style:italic;"></span>que en inglés significa <span style="font-style:italic;">red</span>) .

Por medio del <span style="font-style:italic;">mapa del sitio</span> nos ocupamos activamente de coser o tejer todas y cada una de las páginas de nuestra red que es nuestra web, para mantenerlas conectadas entre sí. Esa forma de conectar de aquí a allá por medio de hipervínculos define la característica más importante de Toda-la-Web. Igualito a la araña que laboriosamente crea su web para atrapar moscas, nosotros webmasters-arañas tejemos las páginas de nuestras telarañas para atrapar usuarios o lectores o clientes. Dependiendo de qué tipo de araña seamos.

Sin embargo, los <span style="font-style:italic;">mapas del sitio</span> son todos iguales. Veamos:

<div style="border:2px solid black;">
<ul>
<li><a href="http://www.blogger.com/">Página principal</a></li>
<li><a href="http://www.blogger.com/productos/">Productos</a></li><ul>
<li><a href="http://www.blogger.com/productos/uno/">Categoria Uno</a></li>
<li><a href="http://www.blogger.com/productos/dos/">Categoria Dos</a></li>
</ul><li><a href="http://www.blogger.com/acerca%20de/">Acerca de</a></li>
<li><a href="http://www.blogger.com/contactenos/">Contáctenos</a></li></ul></div>
Como ya se dijo, contiene links a las páginas más importantes de su sitio. Algunos tips a tener en cuenta:<ul>
<li>Ya que te tomaste el trabajo de escribir el mapa del sitio, es buena idea incluir el mapa del sitio en la página que devuelve el servidor cuando el resultado fue <span style="font-weight:bold;">404 No se encontró la página</span></li>
<li>Verifica dos veces que todos los links sean válidos</li>
<li>No te preocupes excesivamente por la jerarquía de links, pero sí preocupate porque los textos de los links sean suficientemente descriptivos</li>
<li>Verifica por tercera vez que todos los links sean válidos</li>
</ul>Aparte de orientar a tus usuarios, el mapa del sitio da muy buenas pistas a los robots que indexan tu sitio para buscadores. Como dichos robots recorren Toda-la-Web, que no es otra cosa que muchas webs, se los llama arañas (<span style="font-style:italic;">spiders</span>). Poner nuestro nuestro mapa del sitio, es como decirle a las arañas: "Adelante, por aquí por favor, indexame esta página y esta, y esta, y ... y todas las páginas que estén linkeadas desde todas esas páginas, por favor!". Asi nos garantizamos que las arañas entren bien profundo en nuestra propia web.<h4>¿Qué son <em>sitemaps</em>?</h4><b>Sitemaps</b> es otra cosa pero parecida<b>. Sitemaps</b> es el mapa del sitio para arañas<b>. Sitemaps</b> es el nombre de una iniciativa de Google, que ya fue adoptada por la industria como práctica estándar (es decir Yahoo!, Msn, etc, adoptaron el mismo protocolo que Google), con el objetivo de que webmasters y motores de búsquedas cuenten con un medio para poder comunicar el inventario completo de los urls que se sirven en nuestros sitios, por medio de un protocolo conocido y documentado.

Si el sitio es pequeño y todas sus páginas son estáticas, es decir, creadas con un editor en lenguaje HTML, y guardadas en una carpeta del servidor web, y esas páginas son servidas con el mismo nombre con el que se encuentran archivadas en el disco del servidor, pues no hay mucho problema. Es como ver los archivos en "Mis documentos" en "Mi PC".

Pero en el mundo real, sobre todo los sitios más grandes, aunque no en exclusividad, muchas páginas son generadas <span style="font-style:italic;">en el aire</span>, en el mismo momento en que son peticionadas al servidor. Esas páginas no existen físicamente. No se encuentran en forma de archivos estáticos, en la carpeta del sitio web, sino que son el resultado de la ejecución de un programa en el servidor, que las crea y las envía <span style="font-style:italic;">por la red</span> al cliente. Una vez que el cliente la ha consumido, el servidor descarta completamente la página, sin embargo su <span style="font-weight:bold;">url</span>, puede ser permanente y válido para las sesiones de todos los usuarios del sitio, como puede ser transitoria y solo para una sesión y nada más.

Para el caso de una url permanente, hay muchos casos donde las arañas (<span style="font-style:italic;">spiders</span>) no pueden predecir o encontrar esa url, a menos que el webmaster la especifique en algún listado. Desde antes de la creación de <span style="font-weight:bold;">sitemaps</span>, las arañas se han hecho más y más inteligentes como para descubrir por sí solas esas urls dinámicas. Sin embargo, la creación de un mecanismo por el cual el webmaster pudiera producir el listado con el inventario total, era muy necesaria.

Para comenzar con la creación del <span style="font-weight:bold;">sitemap</span> de tu sitio propio sitio web, debes dirigirte a estas páginas:<ul><li><a href="http://www.google.com/webmasters/">Webmaster Central</a></li>
<li><a href="http://siteexplorer.search.yahoo.com/">Yahoo! Search Site Explorer</a></li></ul>
Ambos sitios requieren registración y ofrecen una cantidad de información que no soñabas que era posible obtener sobre tu sitio, sobre cómo se navega tu sitio, sobre cómo ven las arañas tu sitio y sobre cómo está linkeado tu sitio y sobre decenas de cosas más. Si sos de los que les gusta entender, debes ingresar en ambos. Una vez que hayas logrado poner en linea tu sitemap, que como dijimos es el listado de todas las urls válidas de tu sitio, este podrá ser usado por todos los motores de búsqueda, no solamente por Google o Yahoo! Por el hecho de que es un protocolo conocido, documentado y adoptado como estandar, al hacerlo para uno, lo estás haciendo para todos.<h4>Resumen ejecutivo</h4>Cree un mapa del sitio y un sitemap para su sitio web.

