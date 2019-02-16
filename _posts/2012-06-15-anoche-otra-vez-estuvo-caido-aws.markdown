--- 
layout: post
title: "Anoche otra vez estuvo caído AWS"
permalink: /2012/06/15/anoche-otra-vez-estuvo-caido-aws/index.html
author: Jorge Grippo
date: 2012-06-15 22:05:05
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- AWS
- EC2

---
<!-- 318 -->
La infraestructura de cloud computing más importante del mundo, otra vez estuvo en problemas anoche. A eso de las 0.30hs. de Argentina, el datacenter de Virginia US-EAST-1 perdió el suministro eléctrico parcialmente y una de las AZ (Availabity Zone) de las cinco que tiene, dejó de responder el API. <!--more-->La infraestructura se controla desde llamadas API como cualquier otro webservice, por lo cual cuando no hay respuestas a los requests, estos empiezan a llenar las colas de espera hasta el poco a poco todos los sistemas asociados comienzan a verse afectados. En este caso se trató de una parte de volúmenes de almacenamiento. En mi caso, la suerte quizo que la única AZ afectada, hiciera caer el servicio de load balancer (ELB), por lo cual www.grippo.com dejó de responder. Por suerte las instancias EC2 estaban saludables, asique hice un cambio de DNS para que www.grippo.com apuntara directamente a las direcciones IP de los servidores, en vez de al load balancer y así recuperar el sitio on line nuevamente. El incidente llevó unas 4 o 5 horas en ser recuperado, lo cual fue posible después de reponer la unidad de energía que falló y de reparar todos los volúmenes de almacenamiento que había quedado fuera de sincronicidad.

