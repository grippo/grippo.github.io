--- 
layout: post
title: "Cómo servir páginas en 50 milisegundos"
permalink: /2012/06/28/como-servir-paginas-en-50-milisegundos/
author: Jorge Grippo
date: 2012-06-28 18:17:17
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- arquitectura web
- AWS
- Cloud Computing
- seo
- GitHub
- Heroku
- sysadmin
- Amazon S3

---
<!-- 337 -->
<strong>El experimento</strong>

Hace unos meses, en marzo más precisamente, me preguntaba si sería buena idea usar WordPress sólo como CMS en la laptop y publicar solamente páginas estáticas en la nube. <a href="/2012/03/13/idea-para-usar-wordpress-solo-como-backend-y-servir-las-paginas-desde-amazon-s3/">Idea para usar WordPress sólo como backend y servir las páginas desde Amazon S3</a>.

<!--more-->Luego de muy valiosos comentarios recibidos en esa nota, pude poner en práctica esa idea en tres blogs: Psiconotas y Dietasinfo que se hostean en Heroku, y este blog.grippo.com en GitHub: <a href="/2012/05/31/tip-para-hackers-bloguea-gratis-con-octopress/">Tip para hackers: bloguea gratis con Octopress</a>

<strong>Primeros resultados</strong>

Un tema que estaba planteado teóricamente ahora lo pude comprobar. Y es el siguiente: los componentes dinámicos ¿como pueden ser desagregados del server por medio de web services, sin que se afecte el SEO de la página? Pues bien, la teoría era que Googlebot cada vez podría procesar más y más código Javascript en forma correcta y así lo está haciendo. Escribí algo al respecto y está sucediendo y está comprobado: <a href="/2012/06/16/ahora-googlebot-lee-javascriptdocument-write/">Ahora Googlebot lee Javascript:document.write()</a>. Pues bien, aquí viene otra prueba, que es decisiva. Los comentarios de Disqus, son incorporados en la página por medio de Javascript y son indexados por Google como si fueran html común y corriente. Esta frase es de un comentario <a href="http://unahormiga.com/">una hormiga</a>:
<blockquote>"Usando el plugin ese y automatizando la transferencia a S3 te ahorras el EC2, lo podrias tener al WP en localhost y mandar el html que te genere al S3."</blockquote>
Si lo buscamos en Google, con las comillas, nos encuentra la nota donde fue insertado el comentario por medio de Disqus. Genial. Aquí van las pantallas por las dudas que esto cambie en el futuro:

<strong>el resultado de la búsqueda:</strong>

<img class="alignnone size-full wp-image-341" title="busqueda-de-comentario" src="http://blog.grippo.com/wp-content/uploads/2012/06/busqueda-de-comentario1.png" alt="" width="520" height="302" />

<strong>y el caché de la página:</strong>

<img class="alignnone size-full wp-image-340" title="cache-de-comentario" src="http://blog.grippo.com/wp-content/uploads/2012/06/cache-de-comentario.png" alt="" width="478" height="412" />

El dominio todavía resulta ser el antiguo (grippo.wordpress.com), que está redireccionado con HTTP REDIRECT 301 a blog.grippo.com, pero en la imagen queda claro que la página indexada es la nueva / actual.

Otro tema era más que archisabido. Pero estos números están tan buenos que hay que insistir en esto. En términos de performance, no hay nada como servir páginas estáticas. Un gráfico, valdrá más que mil palabras:

<img class="alignnone size-full wp-image-338" title="time-spent-downloading-a-page" src="/wp-content/uploads/2012/06/time-spent-downloading-a-page.png" alt="" width="630" height="193" />

Sencillamente con Wordpress teníamos entre 2 y 4 segundos por página y no estaba nada mal. Pero ¿como compararlo con 50 milisegundos? Naahhh.

¿Los proximos pasos? Incorporar más elementos dinámicos via Javascript. Obvio. Por ejemplo ratings con estrellitas. Saludos y gracias por colaborar!

&nbsp;

