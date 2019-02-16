--- 
layout: post
title: "SSL Certificate working"
permalink: /2012/07/20/ssl-certificate-working/index.html
author: Jorge Grippo
date: 2012-07-20 17:52:06
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias
- Programming
- sysadmin

---
<!-- 358 -->
Finalmente lo logré.

<img class="alignnone size-full wp-image-359" title="SSL-Certificate-en-Grippo-com" src="/wp-content/uploads/2012/07/SSL-Certificate-en-Grippo-com.png" alt="" width="375" height="112" />

No es que sea una tarea super sofisticada, solamente que hay que dedicarle una importante inversión de tiempo, y luego de probar varias cosas que no son obvias, pude instalar un SSL Certificate que funciona como debe ser en www.grippo.com. <!--more-->Este tipo de icono indica que está certificado el dominio. Por medio de un mecanismo on line, la empresa certificadora certifica que el certificado es válido para el mismo dueño del dominio, que está registrado por un registrar. Entre ambas instituciones desconectadas entonces, se arma un círculo de confianza limitado a certificar solamente eso, que el certificado emitido es valido para el dominio, en este caso www.grippo.com.

Antes había instalado todo tipo de certificados gratuitos que pensé que podrían funcionar. Pero los browsers no los reconocen como autoridades, y siempre sale el infame https tachado:

<img class="alignnone size-full wp-image-360" title="https-invalido" src="/wp-content/uploads/2012/07/https-invalido.png" alt="" width="355" height="372" />

Hay otro tipo de certificados que certifican aparte los datos de contacto de la persona o compaña propietaria del mismo. Estos certificado se muestran en color verde en la barra de url:

<img class="alignnone size-full wp-image-361" title="https-google" src="/wp-content/uploads/2012/07/https-google.png" alt="" width="225" height="31" />

<img class="alignnone size-full wp-image-362" title="https-twitter" src="/wp-content/uploads/2012/07/https-twitter.png" alt="" width="277" height="26" />

La movida de pasar a usar el protocolo seguro HTTPS es una iniciativa de Facebook, Twitter y Google entre otros, pero principalmente de Facebook que estuvo sujeto a todo tipo de fraudes cuando usaba el protocolo no seguro, y en un momento decidieron que toda la navegación sea encriptada con https. Eso obligó a todas las aplicaciones a implementar https entre fin del año pasado y principios del actual:

<img class="alignnone size-full wp-image-363" title="https-facebook" src="http://blog.grippo.com/wp-content/uploads/2012/07/https-facebook.png" alt="" width="349" height="30" />

Razón por la cual toda la industria va pasando a un futuro de protocolo web encriptado. La empresas que emiten certificados son varias. Entre ellas Certisur, Godaddy, Verisign, GeoTrust, Joohost, y varias más.

Veremos si ahora sin el infame cartel rojo, la aplicación de Facebook empieza a despegar.

&nbsp;

