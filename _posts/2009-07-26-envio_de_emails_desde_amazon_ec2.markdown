--- 
layout: post
title: "Envío de emails desde Amazon EC2"
permalink: /2009/07/26/envio_de_emails_desde_amazon_ec2/index.html
author: Jorge Grippo
date: 2009-07-26 01:01:01
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
<!-- 93 -->
<div>Si como yo, ya te decisiste a subirte a la nube, este tip te va a resultar interesante si tu servicio una vez migrado a Amazon EC2 despacha emails. Normalmente, luego de configurar tu server, le asignás una dirección IP elástica, que es un número IP aleatorio del pool de Elastic IPs de AWS. Eso es muy conveniente, porque una IP elástica puede ser movida de un server a otro en forma sencilla y facilita tu tarea de administración. Muy bien, encontré que mi servicio no podía enviar emails a ciertos proveedores, como por ejemplo hotmail.com.</div><div><br /></div><div>Sencillamente los emails no eran recibidos.</div><div><br /></div><div><br /></div>

<!--more-->
<div>No se trataba de un problema de filtros anti-spam ni nada de eso. El problema finalmente era que la IP estaba listada en una lista negra de SpamHaus.org, que es una organización global que mantiene listas anti-spam. Se puede interrogar a la base de datos de SpamHaus, por medio de una url, por ejemplo:</div><div><br /></div><div>http://www.spamhaus.org/query/bl?ip=174.129.3.64</div><div><br /></div><div>Siguiendo ese link, y cambiando la direccion IP que aparece al final, averiguás si dicha direccion IP está inscripta en alguna de las 3 listas que mantienen SpamHaus: SBL, PBL y XBL. En mi caso, la respuesta fue la siguiente:</div><div><br /><a href="http://www.flickr.com/photos/grippo/3762408727/" title="Consulta en SpamHaus por jorge_grippo, en Flickr"><img src="http://farm3.static.flickr.com/2593/3762408727_bbc22e1fc5_o.png" width="391" height="172" alt="Consulta en SpamHaus" /></a></div><div>Es decir: malas noticias. La IP estaba en la lista PBL, que es un listado de IPs dinámicas (principalmente dial-up, cable y adsl). Es decir PBL no es una lista de spammers. Pero figurar en la lista PBL, hace que algunos servidores SMPT, como el de hotmail.com directamente rechacen emails originados en esas IP. La solución, es hacer un trámite en SpamHaus, informando que la direccion IP en cuestión es estática y corresponde a un servidor SMTP. Eso se hace ingresando en la siguiente página:</div><div><br /></div><div><a href="http://www.spamhaus.org/pbl/removal/">http://www.spamhaus.org/pbl/removal/</a></div><div><br /></div><div>Una vez que se completa el trámite, en cuestión de horas la dirección IP en cuestión deja de estar en la lista PBL, y los mails comienzan a ser recibidos normalmente en todos lados.</div><div><br /></div><div><br /></div>


