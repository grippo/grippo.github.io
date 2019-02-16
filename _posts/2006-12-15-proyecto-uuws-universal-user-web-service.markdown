--- 
layout: post
title: "Proyecto UUWS (Universal User Web Service)"
permalink: /2006/12/15/proyecto-uuws-universal-user-web-service/index.html
author: Jorge Grippo
date: 2006-12-15 15:22:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias

---
<!-- 24 -->
El objetivo del proyecto es el de crear un web service, que provea los métodos necesarios para implementar la creación y matenimiento de usuarios y el manejo de sesiones. Se busca aislar completamente esos items de la lógica de cualquier aplicación web. En su lugar, implementamos las llamadas correspondientes a los web services UU (Universal User) por medio de protocolo HTTP en formato XML.

<span style="font-size:130%;"><span style="font-weight:bold;">Creación de un usuario</span></span>

<span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">POST http://uuwebservice.org/CreateUser.uu</span>
<span style="font-family:courier new;">&lt;user&gt;</span>
<span style="font-family:courier new;">    &lt;email&gt;</span><span style="font-family:courier new;">jorge@grippo.com</span><span style="font-family:courier new;">&lt;/email&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;ipaddress&gt;</span><span style="font-family:courier new;">123.123.123.123</span><span style="font-family:courier new;">&lt;/ipaddress&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;providerid&gt;</span><span style="font-family:courier new;">456</span><span style="font-family:courier new;">&lt;/providerid&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;/user&gt;</span>
</span>
Response:
<span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;result&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;errorid&gt;0</span><span style="font-family:courier new;">&lt;/errorid&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;userid&gt;828832</span><span style="font-family:courier new;">&lt;/userid&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;"></span></span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;/result&gt;

</span></span>ó
 <span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;result&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;errorid&gt;1</span><span style="font-family:courier new;">&lt;/errorid&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;errormessage&gt;invalid email address</span><span style="font-family:courier new;">&lt;/errormessage&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;/result&gt;</span>
</span>

Esquema:

 <a href="http://bp2.blogger.com/_-Ldut-GKsF0/RYLq6UGRRGI/AAAAAAAAAAM/dU6kJMvabyY/s1600-h/CREATE.gif"><img src="http://bp2.blogger.com/_-Ldut-GKsF0/RYLq6UGRRGI/AAAAAAAAAAM/dU6kJMvabyY/s320/CREATE.gif" alt="" border="0" /></a><span style="font-size:130%;"><span style="font-weight:bold;">Login de un usuario</span></span>

<span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">POST http://uuwebservice.org/LoginUser.uu</span>
<span style="font-family:courier new;">&lt;user&gt;</span>
<span style="font-family:courier new;">    &lt;email&gt;</span><span style="font-family:courier new;">jorge@grippo.com</span><span style="font-family:courier new;">&lt;/email&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;password&gt;</span><span style="font-family:courier new;">a456=2</span><span style="font-family:courier new;">&lt;/password&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;providerid&gt;</span><span style="font-family:courier new;">456</span><span style="font-family:courier new;">&lt;/providerid&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;/user&gt;</span>
</span>
Response:
 <span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;result&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;</span></span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">errorid</span></span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&gt;</span><span style="font-family:courier new;">0&lt;/errorid&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;userid&gt;828832</span><span style="font-family:courier new;">&lt;/userid&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;/result&gt;</span>
</span>
ó

<span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;result&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;errorid&gt;1</span><span style="font-family:courier new;">&lt;/errorid&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">    &lt;errormessage&gt;access denied</span><span style="font-family:courier new;">&lt;/errormessage&gt;</span>
</span><span style="color:rgb(102,102,102);font-size:100%;"><span style="font-family:courier new;">&lt;/result&gt;</span>
</span>
A su vez, el servicio está implementado on top de LDAP.

