--- 
layout: post
title: "Idea para usar WordPress sólo como backend y servir las páginas desde Amazon S3"
permalink: /2012/03/13/idea-para-usar-wordpress-solo-como-backend-y-servir-las-paginas-desde-amazon-s3/
author: Jorge Grippo
date: 2012-03-13 18:32:10
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias
- AWS
- S3
- WordPress

---
<!-- 267 -->
En febrero de 2011, Amazon anunció que una nueva característica (<em>feature)</em> de su servicio de storage S3, que permite funcionar como un servidor de sitio web, en lugar de un servidor de objetos como hasta ese momento. Eso básicamente hace que las respuestas sean diferentes. Antes, si una página no existía veías un diagnóstico en XML. Ahora ves una respuesta estándar de servidor web. Antes, si accedías a un directorio raíz, veías una lista de objetos, ahora se sirve la página index.<!--more--> Básicamente eso.

Si un plugin de WordPress pudiera mantener siempre la versión más actualizada de cada página en el respositorio S3, podríamos estar sirviendo todas esas páginas directamente desde la plataforma de Amazon, con todo lo que eso implica. Opcionalmente podríamos integrarlo al CDN CloudFront, para hacer el sitio todavía más veloz.

Sólo habría que aislar las funcionalidades de backend para ser servidas en el servidor donde está WordPress y disponer todas las urls que puedan ser estáticas al sition en S3.

¿O eso ya existe?

Porque si no existe, debería.

&nbsp;

