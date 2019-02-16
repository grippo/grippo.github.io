--- 
layout: post
title: "Adsense for feeds"
permalink: /2008/08/20/adsense-for-feeds/index.html
author: Jorge Grippo
date: 2008-08-20 20:46:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias

---
<!-- 61 -->
Hoy de casualidad vi que hay Adsense for Feeds, es decir, publicidad contextual de Google para feeds RSS/XML de tu blog o servicio. También por casualidad, descubrí que mi setup de Feedburner era incorrecto. Como me llevó algo de tiempo darme cuenta como es la cosa, lo comento aquí, porque seguramente debe estar generando algo de confusión. Hay que hacer un setup de modo tal que tu CMS, sea Blogger, MT, WP, o lo que sea, redirija los requests al url de tu feed a un nuevo url. Esto ya tendría que haberlo hecho cuando adopté <a href="http://www.feedburner.com">Feedburner</a> como software de monitoreo de mis feeds. Feedburner vino a ayudarnos a entender como se leen nuestros feeds. Simplemente entregando un XML no podríamos comprender nada, asique su servicio es muy valuable. Ahora bien, yo debería haber ido a Blogger que es mi CMS, y especificar que el feed de mi blog, debía ser redirigido a FeedBurner, y no lo hice en su momento. Lo acabo de hacer antes de hacer Adsense for Feeds. Ahora, que hice también el setup de Adsense for Feeds, tuve que volver a Blogger, y especificar un nuevo url que empieza con http://feedproxy.google.com. De este manera, ese proxy lee mi feed y lo transforma en algo nuevo con avisos contextuales.

<span style="font-weight:bold;">Resumen ejecutivo:</span>
<ol><li>Es bueno usar Feedburner para entregar tus feeds, no entregues simplemente tu XML. Una vez que te enrolaste en Feedburner, no te olvides de ir a tu CMS e indicarle que en vez de servir tu XML, lo redirija a la nueva url que te da Feedburner, asi ellos pueden hacer su trabajo.</li><li>Si querés aparte agregar avisos contextuales a tus feeds, enrolate en Google Adsense, y en Get Ads, selecciona la opcion Adsense For Feeds. Nuevamente, una vez que inscribas tu feed, debes ir a tu CMS e indicarle nuevamente que redirija la url de tu feed, a la nueva url que te da Google Adsense.</li></ol>

