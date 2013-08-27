--- 
layout: post
title: "Tip para hackers: bloguea gratis con Octopress"
permalink: /2012/05/31/tip-para-hackers-bloguea-gratis-con-octopress/
author: Jorge Grippo
date: 2012-05-31 16:29:06
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- AWS
- S3
- clod computing
- Ruby
- GitHub
- Heroku
- Octopress

---
<!-- 309 -->
Hace unos dos meses me preguntaba si sería viable <a href="http://blog.grippo.com/2012/03/13/idea-para-usar-wordpress-solo-como-backend-y-servir-las-paginas-desde-amazon-s3/">hostear un blog en Amazon S3</a>. Es decir, usar WordPress, u otro CMS de tu preferencia, y luego hacer el deploy en la nube, subiendo páginas estáticas y dejando que las páginas sean servidas con la mejor tecnología en términos de performance: Amazon S3 y CloudFront.

<!--more-->En ese momento, Juan de <a href="http://unahormiga.com">Una Hormiga</a>, me dijo que "El CTO de Amazon lo hace pero con Jekyll", asique me puse a investigar, y gracias a su comentario, descubrí que esta tecnología, no solo estaba más que pensada, sino suficientemente madura para ser la base de publicación de blogs en <a href="http://github.com">GitHub</a>.

<a href="http://octopress.org"><img title="octopress" src="http://blog.grippo.com/wp-content/uploads/2012/05/octopress.png" alt="" /></a>

Eso me llevó a descubir Octopress, que es una solución construida sobre Jekyll, y que como Jekyll está escrita en Ruby. Pequeño paréntesis: si no estás usando Ruby, como era mi caso, tenés que tener bastante paciencia para instalar la versión correcta de Ruby, y eso ocurre en cualquier plataforma: OSX o Linux. Tanto Jekyll como Octopress requieren Ruby 1.9.2 y lamentablemente los instaladores que vienen con los OS (como ser Aptitude, apt-get install o ports), llegan hasta 1.9.1, asique tenés que internarte en unos engendros (rbenv o RVM) que ayudan a mantener y switchear entre versiones de Ruby en un sistema.

Más allá del dolor de huevos que es tener instalado Ruby, cuando lo tenés, es maravilloso que puedas mantener en tu laptop, o algún hosting barato para mayor ubicuidad, una versión de WordPress que usás como CMS, donde producís todas las notas. Luego la publicación se hace en la nube. Es decir, se generan archivos estáticos y se suben a algún servidor que tengas de cloud computing, como Amazon, y el mismo GitHub, o Heroku. Estos dos últimos son completamente gratuitos cuando empezás. GitHub es siempre gratuito, Heroku te empieza a facturar cuando tenes mucho tráfico, asique también conviene. Tanto GitHub como Heroku, son sistemas que usan Git como repositorio y son ambientes que comprenden perfectamente que lo que estás subiendo es algo producido con Ruby, Jekyll y Sinatra. Asique funcionan espectacularmente bien. El deploy es muy sencillo:

<code>rake generate
rake deploy</code>

En resumen, me entusiasma tener un WordPress escondido en mi laptop, o en un sitio web accesible sólo por mi equipo, y que las páginas sean servidas en la nube. Y además si lo hacés con GitHub o Heroku, sea gratis.

¿Qué pasa con los módulos dinámicos? Existiendo Javascript, esos módulos son delegados e implementados por otros actores, especialmente los comentarios con Disqus, ó Facebook comments si te copan. ¿Qué pasa con el SEO de los comentarios? Se supone que cada días más y más tanto Googlebot como Msnbot leen los comentarios, y otros contenidos, implementados con Javascript. Sino se pondrían anticuados enseguida, perderían relevancia, en fin, <strong>deben</strong> hacerlo.

Este mismo blog.grippo.com está hosteado en Github, aquí tenés una <a href="http://blog.grippo.com/no-existe-esta-pagina.html" rel="nofollow">prueba</a>. Estos otros dos en Heroku: <a href="http://www.dietasinfo.com/">Dietasinfo</a> y <a href="http://www.psiconotas.com/">Psiconotas</a>.

