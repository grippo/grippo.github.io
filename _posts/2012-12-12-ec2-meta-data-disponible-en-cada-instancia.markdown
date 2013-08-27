--- 
layout: post
title: "EC2 meta-data disponible en cada instancia a través de http://169.254.169.254"
permalink: /2012/12/12/ec2-meta-data-disponible-en-cada-instancia/
author: Jorge Grippo
date: 2012-12-12 16:59:44
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
<!-- 426 -->
Tener acceso a meta-data sobre cada instancia EC2 es útil para adaptar algunos detalles al momento del lanzamiento de la instancia. Programáticamente al momento del lanzamiento, podés establecer customizaciones condicionales, de acuerdo a algunas características. El recurso se hace disponible a través de llamadas GET a una dirección IP interna, accesible únicamente desde dentro de las subnets de AWS. La dirección IP es

<code>http://169.254.169.254</code>

Ejemplos de llamadas GET:
<pre>$ curl http://169.254.169.254/
1.0
2007-01-19
2007-03-01
2007-08-29
2007-10-10
2007-12-15
2008-02-01
2008-09-01
2009-04-04
2011-01-01
2011-05-01
2012-01-12

$ curl http://169.254.169.254/2011-05-01/meta-data/
ami-id
ami-launch-index
ami-manifest-path
block-device-mapping/
hostname
instance-action
instance-id
instance-type
kernel-id
local-hostname
local-ipv4
mac
metrics/
network/
placement/
profile
public-hostname
public-ipv4
public-keys/
reservation-id

$ curl http://169.254.169.254/2011-05-01/meta-data/instance-type/
t1.micro
</pre>

La clave es pasar informaci&oacute;n a través de <tt>user_data</tt> al momento del lanzamiento y luego interrogar por esa información a través de <tt>$ curl http://169.254.169.254/2007-01-19/user-data/</tt> en el momento que sea necesario para customizar la instancia. Los datos que se pasan son opacos para AWS, quedando a tu disposici&oacute;n darles el formato adecuado para manipularlo cuando sea necesario. En el link de la referencia hay ejemplos.


Referencia de urls disponibles en <a href="http://docs.amazonwebservices.com/AmazonEC2/dg/2007-01-19/AESDG-chapter-instancedata.html">Using Instance Data</a>

