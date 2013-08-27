--- 
layout: post
title: "EC2 Esto que descubrí está bueno Una réplicas..."
permalink: /2011/02/23/ec2-esto-que-descubri-esta-bueno-una-replicas/
author: Jorge Grippo
date: 2011-02-23 15:24:26
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- status
- Cloud Computing
- debian
- EC2
- mysql
- ubuntu

---
<!-- 170 -->
EC2: Esto que descubrí está bueno. Una réplicas MySQL las tenía en instancias instance-store (o sea con el root device en S3) y sistema operativo Debian. Ahora las pasé a instancias EBS con Ubuntu. 2 grandes resultados positivos: 1) mejor respuesta de server con Ubuntu (menor load average) y 2) crear nuevas répicas con un par de clicks en el dashboard, en lugar de tener que armar nuevos AMIs.

