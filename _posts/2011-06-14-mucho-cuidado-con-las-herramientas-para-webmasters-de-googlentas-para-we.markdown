--- 
layout: post
title: "Mucho cuidado con las Herramientas para Webmasters de Google"
permalink: /2011/06/14/mucho-cuidado-con-las-herramientas-para-webmasters-de-googlentas-para-we/index.html
author: Jorge Grippo
date: 2011-06-14 01:09:05
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias
- buscador google
- googlebot seo 404 410
- seo

---
<!-- 216 -->
A pocas horas de finalizar <a href="http://www.uberbin.net/archivos/google/fuera-de-google-fuera-de-internet.php">5 días de pesadilla</a>, vengo a mostrarles como esa pesadilla se generó dentro mismo de Grippo puntocom, con una pequeña ayudita de los diseñadores de interfaces de Google.

<caption id="" align="alignnone" width="600" caption="En esta opción de WMT, eliminamos urls discretas"><img title="Herramientas para Webmasters de Google" src="http://a8.sphotos.ak.fbcdn.net/hphotos-ak-ash4/251226_10150281449895211_681735210_9546436_2123017_n.jpg" alt="" width="600" /></caption>

En sitios donde ingresa contenido generado por usuarios, como es el caso de Grippo puntocom, recibimos solicitudes de usuarios para eliminar sus datos, de cuando en cuando. Los usuarios nos piden eliminar sus datos de nuestro sitio y lo hacemos en forma lo más rápido posible, ya que los datos son suyos. También nos piden hacer algo para no aparecer más en Google. Si no hiciéramos nada, pueden pasar semanas hasta que Google en su proceso de indexación de la web, tome en cuenta que esa url ya no existe más en Grippo puntocom. Damos una respuesta HTTP 410 GONE para dejar en claro a los rastreadores, que no hay posibilidad de que ese contenido vuelva a aparecer bajo ningún concepto. Google ha dispuesto a su vez para webmasters autenticados, una opción en Webmasters Tools para solicitar eliminación de urls. En la imagen de arriba se pulsa click sobre el botón que dice "Nueva solicitud de eliminación".

<caption id="" align="alignnone" width="600" caption="Asegurate de meter algo en el casillero antes de apretar CONTINUAR, o estarás borrando todo tu sitio"><img title="Eliminación de url" src="http://a8.sphotos.ak.fbcdn.net/hphotos-ak-snc6/247550_10150281451015211_681735210_9546448_2547909_n.jpg" alt="" width="600" /></caption>

Si tengo que eliminar una url en http://midominio.com/carpeta1/archivo1.html, sólo tengo que ingresar la parte de path y query si lo hay, pero no schema y host, es decir en este caso "carpeta1/archivo1.html", host es el dominio autenticado en WMT. Si por error, como nos pasó la semana pasada, dejas esa información en blanco y pulsas CONTINUAR, lo que estás haciendo es <strong>borrando todo el sitio</strong>! Fijate en el gráfico, la línea que dice http://www.grippo.com/ del otro lado dice "<strong>Eliminación del sitio</strong>" en vez de "Eliminación de página".

Mucho cuidado con esta interface.

Desde ya que pienso que en Grippo puntocom nos hemos equivocado y pagado caro el error. Pero también Google se ha equivocado disponiendo una acción tan destructiva en forma que el webmaster puede provocar una catástrofe sin darse cuenta.

Asique <strong>CUIDADO</strong>!

