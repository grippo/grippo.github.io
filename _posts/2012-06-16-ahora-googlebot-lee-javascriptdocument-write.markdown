--- 
layout: post
title: "Ahora Googlebot lee Javascript:document.write()"
permalink: /2012/06/16/ahora-googlebot-lee-javascriptdocument-write/
author: Jorge Grippo
date: 2012-06-16 17:29:35
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- seo
- UI
- Programming
- UX

---
<!-- 320 -->
Hace algunos años, quizás cinco, cuando incorporé geolocalización en www.grippo.com, el nombre de la ciudad y país del usuario conectado aparecía en las páginas como resultado de usar document.write(), así Googlebot no podía verlo y por lo tanto no formaba parte del contenido de la página. Pues bien, el tiempo ha pasado y GoogleBot ya lee perfectamente mis document.write() y por lo tanto ha incorporado como contenido una mención en todas las páginas a "Mountain View, United States", ó "Toronto, Canadá", que son la ciudades y países correpondientes a las IP de Googlebot. Lo cual me llevó a una disyuntiva, que mencionaré enseguida.<!--more--> Pero antes un poco de desarrollo del tema.

Ya el año pasado Google anunció que cada vez más Googlebot podría ejecutar Javascript para completar su lectura de una página. Eso es muy importante, por un tema de arquitectura de la web, donde cada vez más se delegan ciertas tareas en requests AJAX en el cliente, para tener un server más delgado o mejor departamentalizado en roles. Hablando claro, debían hacer eso para leer los Facebook comments que se fueron instalando como reguero de pólvora por toda la web. Y también Disqus.

Para la psicología del webmaster, también esto es genial. Porque te permitiría volver a tener un sitio completo basado en páginas estáticas que es lo que mejor funciona a nivel servidor web, latencia, cachés y performance en definitiva, y delegar todo lo dinámico a llamadas AJAX. Como por ejemplo los comments de Facebook o Disqus.

Asique, está muy bien que Google se preocupe de que Googlebot pueda comprender que el contenido de una página se logra recién cuando la página termina de ser renderizada en el browser, por lo tanto, Disqus y Facebook comments, como así también cualquier otro componente dinámico via llamadas Javascript. Pues bien, la disyuntiva es que cierto "white hat cloaking" es necesario. Cloaking es cuando se trampea al robot mostrándole una página que está diseñada solo para él y al resto del mundo se le muestra una página completamente diferente. Para hacer cloaking, el server inspecciona el "User-Agent" y si es Googlebot manda ciertos contenidos y si no, los otros. El caso del que hablamos aquí no tiene por objetivo trampear al robot, pero es la primera vez que <a href="http://www.webmasterworld.com/google/4465285.htm">se justifica que partes del contenido sean escondidas del robot</a>, para que no indexe ciertos contenidos que son variables como la ciudad y país del usuario.

O por lo menos es la primera vez que me ocurre a mí. ¿Lo habrás visto antes? Comentalo.

