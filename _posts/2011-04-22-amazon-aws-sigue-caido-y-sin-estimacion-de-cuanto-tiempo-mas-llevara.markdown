--- 
layout: post
title: "Amazon AWS sigue caído y sin estimación de cuánto tiempo más llevará"
permalink: /2011/04/22/amazon-aws-sigue-caido-y-sin-estimacion-de-cuanto-tiempo-mas-llevara/index.html
author: Jorge Grippo
date: 2011-04-22 11:35:31
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- post
- AWS
- EBS
- EC2

---
<!-- 189 -->
El problema quedó circunscripto a una zona dentro de una región. En esa zona está alojado www.grippo.com, mientras no terminen de recuperar los volúmenes de storage afectados, no van a liberar la plataforma para que se ejecuten las API. Para colmo, ya avisaron que tienen que recuperar muchos volúmenes de storage directamente de un backup desde S3.

En 15 años desde que www.grippo.com está online, habiendo pasado por cuanto tipo de hosting haya sido inventado, nunca nunca nunca estuvo caído tanto tiempo como ahora que está supuestamente en un ambiente donde no hay un ùnico punto de fallo y lo hubo.

Ahora se especula que se debería tener más redundancia, haciendo réplicas en varias regiones, no solamente en zonas dentro de una sola región, pero hasta ahora Amazon había prometido suficiente redundancia dentro de una misma región y no la había. Muchos sitios muy grandes fueron impactados como Foursquare, Quora, Hootsuite, Reddit. Aunque mal de muchos es consuelo de tontos,

Actualización:
19:05 Van 37 horas, y anuncian que faltan 4 o 5 horas más para dar por terminado el incidente. Todavía no puedo usar las APIs. Se siente muy raro saber que tantas horas el sitio no estuvo en línea.

Actualización 2:
20:30 Excelente artículo tratando de aprender sobre esta experiencia -- https://agilesysadmin.net/ec2-outage-lessons



