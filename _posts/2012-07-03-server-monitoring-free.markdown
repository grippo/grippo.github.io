--- 
layout: post
title: "Server monitoring free"
permalink: /2012/07/03/server-monitoring-free/
author: Jorge Grippo
date: 2012-07-03 18:43:42
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters

---
<!-- 348 -->
He usado todo tipo de software para monitorear servidores. Y todos me dieron resultados interesantes pero este servicio que estoy usando hace algunas semanas provisto por <a href="http://www.newrelic.com">New Relic</a>, es del tipo que no tiene contras. Y tiene muchísimas a favor, entre ellas que es muy liviano el componente en el server y todo el procesamiento, reporting y alertas se hace desde la nube.<!--more--> Mantenimiento cero y usabilidad bastante completa.

<a href="http://www.newrelic.com"><img class="size-full wp-image-349" title="server monitoring free tool" src="/wp-content/uploads/2012/07/new-relic.png" alt="" width="550" height="256" /></a>

Así se instala newrelic, en cada server:

<code>wget -O /etc/apt/sources.list.d/newrelic.list http://download.newrelic.com/debian/newrelic.list
apt-key adv --keyserver hkp://subkeys.pgp.net --recv-keys 548C16BF
apt-get update
apt-get install newrelic-sysmond
nrsysmond-config --set license_key=[license_key]
/etc/init.d/newrelic-sysmond start
</code>

En breves momentos, tus reportes comienzan a proliferar en tu dashboard en la web. Sensacional.

¿Por qué gratis? New Relic tiene un producto pago que es algo más avanzado que server monitoring, y es application monitoring. El lema es: enterate antes que tus usuarios si tu app está en problemas. Tiene sentido, y cuando tu app genera un nivel de facturación interesante, es una opción muy valiosa contar con New Relic.

*** Disclaimer: este producto me gusta. Solamente eso. No tengo acciones ni ningún otro interés con esa compañía.

