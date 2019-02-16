--- 
layout: post
title: "Wordpress cómo instalar"
permalink: /2012/06/22/wordpress-como-instalar/index.html
author: Jorge Grippo
date: 2012-06-22 23:27:19
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters

---
<!-- 332 -->
Este mecanismo para actualizar Wordpress es adecuado cuando tenés acceso SSH al host donde esté alojado. Si no tenés acceso SSH, entonces hay otras alternativas, que no están cubiertas en esta nota. Supongamos que el blog esté alojado en /home/user/miblog/htdocs

<!--more-->Disclaimer: <strong>Antes de nada hacer backup de todo. Todo incluye tu directorio htdocs completo y la base de datos.</strong>

<code>cd
mkdir tmp
cd tmp
wget http://es.wordpress.org/wordpress-3.4-es_ES.zip
unzip wordpress-3.4-es_ES.zip
mv wordpress htdocs
tar -czf htdocs.tar.gz htdocs
cd
cd miblog
find htdocs -type d -exec chmod 755 {} \;
find htdocs -type f -exec chmod 644 {} \;
tar -xzf ../tmp/htdocs.tar.gz
find htdocs -type d -exec chmod 555 {} \;
find htdocs -type f -exec chmod 444 {} \;
chmod 755 htdocs/wp-content/uploads
</code>

Las líneas 1 a 4 hacen el download del software. Prestar atención a la versión, en este caso es 3.4, pero obviamente eso va a ir cambiando.

La línea 5, 6 y 7 crean un nuevo paquete que en vez de usar el nombre wordpress como directorio usan el nuestro. En este caso htdocs, pero en tu caso puede variar.

La línea 7 a 11, preparan los directorios a la modalidad de escritura, para que puedan ser reemplazados todos los archivos con los del nuevo Wordpress.

La línea 12 hace el deploy.

Las líneas 13 a 15 dejan los directorios y archivos en modo read-only para que nadie excepto tu user pueda cambiarlos, y evitar que desde una llamada http puedan inyectar código malicioso. Excepto el directorio /wp-content/uploads que es donde subes las imágenes y otros uploads.

