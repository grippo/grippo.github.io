--- 
layout: post
title: "AWS Redundancia las tarlipes"
permalink: /2012/06/16/aws-redundancia-las-tarlipes/index.html
author: Jorge Grippo
date: 2012-06-16 17:44:32
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- AWS
- EC2
- Programming

---
<!-- 324 -->
Alguien pateó un cable y se cayó Amazon Web Services y la mitad de la web otra vez. Quora, Chartbeat, Heroku, ... y Grippo.com.

El marketing de Amazon es excelente, pero nos venden humo una y otra vez, los hdp. Concretamente el 14 de junio, o sea antes de ayer, de madrugada como corresponde, una unidad de energía eléctrica hizo puf en el datacenter de Virginia y la mitad de Internet cayó.

<!--more-->Parece cuento, pero es la hipautez más grande que un equipo de marketing haya logrado instalar entre los early-adopters, visionarios e innovadores de la comunidad nerd que mantiene algunos de los sitios webs más visionarios e innovadores en todo el mundo. Les han mentido en su cara una y otra vez.

Se supone que si alguien desenchufa la zapatilla donde están enchufados los quintillones de servers de Amazon, inmediatamente debería entrar en servicio la unidad redundante más cercana. Pues no, lo que pasa es que se va todo al carajo y listo. Ah y si te quejás, se te lanzan zombies educados por los mismos marketineros de Amazon, diciendo que la redundancia la tenés que poner vos.

Váyanse a cag... Desde el 14 de enero estoy dale que te dale, arreglando volúmenes corruptos, cambiando DNS, moviendo databases de aquí para alla y reconfigurando servers. En Amazon también atan todo con alambre. Tardaron 6 horas en devolverte el control sobre los "web services" para que puedas empezar a arreglar todo el kilombo vos solito. Unos capos.

Ojo con Amazon. No creas nada de lo que digan sobre redundancia, o únicos puntos de fallo. Los hechos son que en 2011 tuvieron el peor incidente con 5 días corridos, busquen "Amazon Outage" en Google. Este incidente ridículo por una unidad de energía que se quema el 14 de junio es un escándalo. Mi entusiasmo por la tecnología de punta me llevó muy temprano a mover todo a Amazon en 2008. No dudo de que el cloud computing sea el camino correcto, pero que nos engañen de esta manera no es justo.

