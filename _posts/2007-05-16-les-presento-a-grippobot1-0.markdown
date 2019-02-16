--- 
layout: post
title: "Les presento a GrippoBot/1.0"
permalink: /2007/05/16/les-presento-a-grippobot1-0/index.html
author: Jorge Grippo
date: 2007-05-16 04:19:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias
- Todo lo demás

---
<!-- 34 -->
En las últimas semanas tuve que tomar decisiones <span style="font-weight:bold;">muy importantes</span>. Una de ellas fue enfrentar el duro email de una usuaria, que me decía lo siguiente:
<blockquote>Hola, Mi nombre es Mercedes Txxxx, no sé si esta es la direccion correcta para mandar este correo electronico, el problema que tengo es el siguiente, la información que dan es incorrecta, todos los links que dan no existen, y si la página de x empresa existe tiene otro nombre y hay que googlearla. Me parece que deberian revisar la info, ya que cada vez que usas el google te saltan miles de paginas de grippo y cuando entras no sirven de nada, es una perdida de tiempo. Lo que quiero decir con todo esto es que el servicio que estan dando es de pésima calidad, en conclusion, no sirve. Disculpen las molestias y espero que mejoren. Mercedes Txxxx
</blockquote>
Entonces me puse a jugar un ratito con el buscador Grippo y efectivamente, Mercedes Txxxx tenía razón. Asique fuí a revisar si el robot encargado de verificar links rotos estaba funcionando y ... evidentemente hacía mucho tiempo que el robot estaba dormido por no decir en terapia intensiva. Entonces le dí cuidados intensivos y desde hace unos días está vivo nuevamente revisando unos 10 mil urls por día. Si llegaran a ver en los <span style="font-style:italic;">log files</span> del webserver, un <span style="font-style:italic;">useragent</span> llamado <span style="font-weight:bold;">GrippoBot/1.0</span>, se trata de él. Básicamente el robot está haciendo una petición HEAD de cada url registrado en el buscador. Si la petición no responde, el sitio es eliminado y los usuarios como Mercedes Txxxxx ya no sufrirán las consecuencias de tener que visitar links rotos. Adicionalmente si el dominio pasó a un estado conocido como <span style="font-style:italic;">parking</span>, también es eliminado, ya que cuando está <span style="font-style:italic;">parkeado</span>, el contenido que tiene es 100% artificial. Si se detecta una redirección en el mismo dominio, el url se corrije por el nuevo. Si de detecta una redirección a otro dominio, pasa a una cola para ser evaluado. Finalmente en los urls que quedan vivos, el robot en una segunda pasada con petición GET, busca descubrir nuevos urls dentro del dominio .AR para ser incorporados en el buscador.

Muchas gracias Mercedes Txxxx, espero que muy pronto, se verifique lo que le respondía a su mensaje, que fué lo siguiente:
<blockquote>Muchas gracias por haberse tomado el tiempo de escribirme sus observaciones. Estamos trabajando en el sentido que usted propone, y espero que pronto pueda evaluar nuestro servicio en forma más satisfactoria.</blockquote>

