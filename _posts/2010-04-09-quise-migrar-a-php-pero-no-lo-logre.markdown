--- 
layout: post
title: "Quise migrar a PHP, pero no lo logré"
permalink: /2010/04/09/quise-migrar-a-php-pero-no-lo-logre/
author: Jorge Grippo
date: 2010-04-09 16:34:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias

---
<!-- 135 -->
Cuando empecé a desarrollar para la web, el sistema operativo y el lenguaje de programación no se elegían entre una gran lista de posibilidades. El OS era siempre algún Unix. Windows todavía experimentaba con algo que llamó Windows For Workgroups y por suerte no era una opción todavía. El lenguaje de programación por default era <a href="http://www.perl.org/">Perl</a>, aunque siempre podías hacer aplicaciones en C. Si bien no puede decirse que era lo único disponible, Perl era el que tenía más soporte, era por lejos más popular que cualquier otro y contaba con CPAN, una gran <a href="http://www.cpan.org/">librería open source, donde encontrar solucionada practicamente cualquier necesidad</a>.&nbsp;Mi sistema operativo preferido terminó siendo <a href="http://www.freebsd.org/">FreeBSD</a>, el mismo que usaba Yahoo!, la más grande propiedad web hasta ese momento.<br />
<br />
So far, so good.<br />
<br />
Sin embargo ahora mismo Perl no es muy popular. Específicamente en Latam es muy raro encontrar proyectos que todavía usen o se mantengan en Perl. Ni que hablar de FreeBSD, del cual también rara vez escuché de algún proyecto que haya sido contruido sobre FreeBSD en la región. Específicamnte se que <a href="http://confronte.com.ar/">Confronte</a> se hizo en mod_perl y seguramente hay varios más, pero definitivamente el porcentaje grande se lo lleva obviamente <a href="http://www.php.net/">PHP</a>. Si bien muchos startups confían en <a href="http://rubyonrails.org/">RoR</a> + Ruby o <a href="http://www.djangoproject.com/">Django</a> + Python o incluso <a href="http://www.java.com/es/">Java</a> por supuesto, PHP ha probado ser el más popular hoy en día.<br />
<br />
Como es lo que me gusta hacer, probé todos. Tratando de migrar desde Perl, a algún nuevo lenguaje que me permita eventualmente incorporar colaboradores al equipo, para seguir construyendo y manteniendo Grippo.com. Eso venía durando 2 años aproximadamente. Misma historia con el sistema operativo. Probé todas las variedades de Linux, y me quedé con <a href="http://www.debian.org/">Debian</a>. Pasarse de BSD a Linux siempre es penoso, y creo que la imbatible sencillez de Debian para instalar software, me ayudó más que ninguna otra cosa a hacer la elección. Aparte de que es robusto y está muy bien mantenido. &nbsp;Asique a lo largo estos dos años y específicamente el año pasado al subirme definitivamente a la nube, todos los servidores fueron lanzados con Debian. Problema resuelto. <br />
<br />
De pronto, luego de desarrollar en todos esos lenguajes nuevos, y de elaborar en cada caso una estrategia de (in)migración, encontré que el soporte de Perl había crecido en estos últimos dos años. Ya que una cosa es lo que pasa en Latam y otra donde se desarrollan las principales innovaciones. Cada cosa nueva que salió, tuvo soporte en Perl. &nbsp;Sumé a eso, que al pasarme a Debian, pude sobrellevar un problema imprevisto. En Debian ya no hay soporte para mod_perl 1.x, ni apache 1.x, que eran mi plataforma en ese momento. Tanto apache 2.x como mod_perl 2.x son bichos bastantes diferentes a sus predecesores, y el soporte de las versiones anteriores era nulo o muy pobre. En concreto, al pasar a Debian, también había hecho un upgrade de apache 1 a 2 y de mod_perl 1 a 2.<br />
<br />
Finalmente, probando literalmente decenas de opciones, encontré que era viable continuar con Perl, y aún así poder seguir implementando toda novedad que surja, asique aquí estoy, intentando por última vez resistir la migración a PHP.<br />
<br />
Los próximos desarrollos serán consumir y entregar web services.

