--- 
layout: post
title: "Grippo para moviles está listo"
permalink: /2010/08/23/grippo-para-moviles-esta-listo/
author: Jorge Grippo
date: 2010-08-23 23:13:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias

---
<!-- 141 -->
<p>
Es muy raro volver a escribir acá. Son tiempos donde no queda claro dónde exactamente está la comunidad. Si en Twitter, Facebook, o el blog. Aparentemente algo como un anuncio oficial de la naturaleza de este post, se merece un post. Asique allí vamos:
</p>

<p>
Los últimos 4 meses los invertí en migrar Grippo.com desde una aplicación anterior en mod_perl, a una plataforma nueva, también sobre mod_perl, pero con HTML::Mason, que es algo así como PHP para quienes preferimos Perl. La idea de migrar era tener entre otras cosas mayor flexibilidad al momento de agregar, eliminar y modificar features. Supuse que lo haría más rápida y eficientemente. Y así fue. Una vez que logré migrar el último módulo a la nueva plataforma, en cuestión de horas tuve lista la versión mobile de Grippo.com.
</p>

<p>
Me propuse no usar un redirect, solución que entre otros usan <tt>m.google.com</tt>, <tt>m.youtube.com</tt>, <tt>m.lanacion.com.ar</tt> o <tt>movil.clarin.com</tt>, sino servir los contenidos para <em>mobile</em> en la tradicional url <tt>www.grippo.com/</tt>. Esto es fantástico porque te libera de tener que hacer siempre otro desarollo más para moviles, cada vez que la aplicación cambia, cosa que ocurre cada vez con mayor cotidianeidad. También es fantástico porque generalmente la versión para moviles tiende a ser raquitica en cantidad de features y contenidos, comparándola con la vesión <tt>www</tt>, o principal, por llamarla de alguna manera.
</p>

<p>
También me propuse que no sea un aplicación de código nativo de ningún dispositivo, sea iphone, blackberry, android, o cualquier otro. En su lugar, me hace mucho más sentido que sea una aplicación web, que funciona dentro del browser, con toda la potencia de la conectividad en tiempo real y con una interfaz universal de página web. 
</p>

<p>
En ambos sentidos me siento muy satisfecho. Si bien hay páginas que todavía quedan muuuuyy largas para cualquier dispositivo, es algo que puedo ir puliendo facilmente. 
</p>

<p>
Como dije, HTML::Mason es parecido a PHP,  y te permite escribir código como este directamente en un template:
</p>

<p>
<pre>
% if ($session{is_mobile}) {
&lt;!-- aqui va contenido solo para moviles --&gt;
% } else {
&lt;!-- aqui va contenido solo wide-screen --&gt;
% }
</pre>
</p>

<p>
Luego de usar mod_perl durante años, haber logrado eso es una gran alegría.
</p>

<p>
Recomiendo a todos los desarrolladores: simplificar. En los dos frentes:<ol>
<li><p><b>Redirects?</b> <i>buh buh no no</i>,<b> mismo template para www y mobile?</b> <i>yeah yeah si si</i>.</p></li>
<li><p>Pensar en moviles como pantallas pequeñas, versus pantallas grandes. No se sorprendan de que en poco tiempo en los livings de muchos hogares (los mismos de la gente que usa smartphones), van a navegar en internet en los nuevos LCD o como se llamen que tengan WiFi y navegador integrado. Sugiero dejar el iPad y otros tablets, en otra categoría en los casos que se justifiquen (diarios, revistas, games y sitios fuertes en contenidos), aunque en general, lo primero que haremos es tratarlos como wide-screen.</p></li>
</ol>
</p>

<p>
Ahora no me averguenzo más cuando veo mi sitio en algun celular. Al contrario, se ve bien bonito y veloz.
</p>

<p>
:)
</p>

