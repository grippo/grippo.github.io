--- 
layout: post
title: "Completada la migración a Amazon AWS"
permalink: /2009/10/07/completada_la_migracion_a_amazon_aws/index.html
author: Jorge Grippo
date: 2009-10-07 18:27:57
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- Cloud Computing

---
<!-- 108 -->
Se van a cumplir 90 días de que migré mis aplicaciones a Amazon AWS. El 30/set, hace justo una semana, desenchufamos, desatornillamos y retiramos los servidores del datacenter de Diveo / SkyOnline / Netizen.&nbsp; <br /><br /><br /> <a href="http://www.flickr.com/photos/grippo/3991339696/" title="Imagen 21 por jorge_grippo, en Flickr"><img src="http://farm3.static.flickr.com/2457/3991339696_4c71c44a23.jpg" alt="Imagen 21" height="500" width="416" /></a><br /><br />Lo que ves en la imagen, es lo que me costo el consumo en Amazon AWS durante el mes de setiembre. Son 4 servidores EC2 small y uno medium. Mas S3 con CloudFront (unos 30 millones de hits), más un load balancer. <br />

<!--more-->
A quienes habían leído mis notas anteriores durante la migración, les debía un reporte de gastos de un mes normal. Representa un cuarto de lo que estaría pagando en el datacenter de siempre, sin ninguna de las capacidades especiales de cloud computing.<br /><br />No voy a decir que fue sencillo, la verdad que no. Sobretodo para alguien que siempre usó FreeBSD y de golpe tiene que usar Debian, porque no hay opción FreeBSD todavía para XEN, que es el virtualizador de servidores. S3, CloudFront, ELB son sencillos. EC2 no tanto, hay que dedicarle tiempo a conocerlo. EC2 + EBS (la unidad de storage) es sensacional.<br /><br />Tampoco voy a decir que es igual al servidor de "carne y hueso". Es bien diferente. Hay que dedicarle bastante tiempo a tunearlo y configurarlo adecuadamente. Ahora que ya pasó, estoy muy conforme, pero cada aplicación que moví, significaron días completos de problemas en la configuración que necesitaban ajustarse, para que la performance sea aceptable. Ahora todo anda mejor que óptimo. Y estoy muy contento y aliviado de haber traspasado todos los inconvenientes.<br /><br />Escribiendo las notas durante la migración, encontré que mucha gente se había interesado. Luego caminando por esos mundos (reales), encontraba aquí y allá a quienes habían leído mis notas y me comentaban esto y aquello. Asique este reporte va para ustedes que venían siguiendo esta serie, se los había prometido.<br /><br />También aquí y allá encontré varios sitios realmente grandes que estaban también migrando o ya habían migrado a Amazon y algunos de ellos compartieron valiosa información conmigo, les agradezco mucho!<br /><br />Las proximas notas serán sobre EC2, que es lo que más problemas me trajo.<br /><br /><br /><br /><br />


