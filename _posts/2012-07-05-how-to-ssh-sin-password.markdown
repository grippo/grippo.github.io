--- 
layout: post
title: "How-To: SSH sin contraseñas"
permalink: /2012/07/05/how-to-ssh-sin-password/
author: Jorge Grippo
date: 2012-07-05 05:55:17
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Programming
- sysadmin
- ssh

---
<!-- 354 -->
Puedes haberlo hecho 1 millón de veces. En ese caso esta receta te parecerá genial. Si, por el contrario el archivo <code>authorized_keys</code> es tu amigo, puedes dejar de leer ya mismo.

<code>
$ ssh miuser@mihost.midominio.com
miuser@mihost.midominio.com's password: ******
</code>

<!--more-->¿Has hecho eso un millón de veces? Entonces hacete amigo de <code>autorhized_keys</code>. Digamos que usas una laptop o PC y trabajas con servidores que vaya uno a saber dónde realmente están ubicados. Y aunque lo sepas, no vas a ir en taxi a conectarte a cada uno de ellos. Usas SSH como se muestra en la sesión de arriba. SSH es el acrónimo de Secure Shell, y que en internet reemplaza a telnet para realizar conexiones seguras (encriptadas) entre tu terminal y un host.
<h2>Primero crea tus keys</h2>
Si no lo has hecho todavía, lo primero es crear dos claves o keys. Una pública y otra privada. La privada no se la digas a nadie, por eso es privada, se supone que tú y sólo tú debes conocerla. La pública puedes entregarla a cualquiera con quien quieras crear una relación de confianza. No me refiero a tu vecinita de enfrente, sino a tu host remoto, por ejemplo. Para crear tu par de claves en tu laptop, macbook o PC/Linux (lo siento pero Windows no viene con ssh):

<code>
$ ssh-keygen -t dsa
Generating public/private dsa key pair.
Enter file in which to save the key (/home/ubuntu/.ssh/id_dsa): [enter]
Enter passphrase (empty for no passphrase): [enter o una frase]
Enter same passphrase again: [enter o la misma frase]
Your identification has been saved in /home/ubuntu/.ssh/id_dsa.
Your public key has been saved in /home/ubuntu/.ssh/id_dsa.pub.
The key fingerprint is:
d8:9a:d2:61:85:21:c6:93:52:5f:7d:76:f1:58:13:9b miuser@mihost.midominio.com
The key's randomart image is:
+--[ DSA 1024]----+
| o+.. .. .+o|
| ..+o + . o .++|
| . .o . o ..E.|
| + |
| + S |
| o + |
| . + |
| . |
| |
+-----------------+
$ ls -la .ssh
drwx------ 2 ubuntu ubuntu 4096 Jul 5 02:39 .
drwxr-xr-x 6 ubuntu ubuntu 4096 Jun 26 03:42 ..
-rw------- 1 ubuntu ubuntu 668 Jul 5 02:39 id_dsa
-rw-r--r-- 1 ubuntu ubuntu 613 Jul 5 02:39 id_dsa.pub
</code>

Ahora has creado exitosamente la clave privada <code>id_dsa</code> (shhh, no se la muestres a nadie) y la clave pública <code>id_dsa.pub</code>. Ahora tienes que lograr poner el contenido de <code>id_dsa.pub</code> en un archivo ubicado en el host remoto, exactamente en un subdirectorio de tu home en el host remoto que se llama <code>.ssh</code> y que como está escondido sólo puedes verlo con <code>ls -la</code> por ejemplo. Primero revela el contenido de <code>id_dsa.pub</code>, con:

<code>
$ cat .ssh/id_dsa.pub
ssh-dss AAAAB3NzaC1kc3MAAACBAInXEu2lwRlsq7/ACSiEraQ+newdQ1SKUO1UypEjg0BLoIzIox/zi95aYgeNXXrl4bxZ5FNIMoPf3A9q9oGht+ISvahvcpe0AEsdkTvWearvNbUX5ZS0inLI16trRNRfYohl/J/6RH4lchkGX6PJttWVSgo3/a3mCKNlvQgYIMP1AAAAFQDaOYZTDLGnLElnRuYyIcICspCozwAAAIBGf3PDdcEbv3UmJXJpPB8uN8Oz9a31Gx+0000TtOrIuNcRSOKOz+oyULvU6IeFGc6Bf6e6MRCzR/GGhNuYP/eJXmjV2bTx1111d9UYbUlidtHNABHnm8Bi35gCLwRd0G4eDCz0j7z5YGLEfnJ+5xUAoITNu1tTgOfnOak4qnUEjwAAAIA2J+llX6fMq+7wozqGK50FgUU1USd6uBGWs5WLiINT/ZJT8STR/HwTolxVppMsqKH3wrn7xlIFeUQx0OA+jbwpB0AxFmZIjhRlPYXqPvVLF8ymNdeCuPfganYBciy88L+qKatxbtzgz04GjC7Owgr7wrpavJe0abgsYJtr1bA25w== miuser@mihost.midominio.com
</code>

Copia todo el texto y conectate al host remoto en la manera tradicional con contraseña. Una vez que estás en el host remoto, fijate si ya tienes un directorio <code>.ssh</code>. Usa <code>ls -la</code> para ver si existe o no. (Si no existe, crea las claves públicas y privadas ahora en el host remoto, como lo has hecho antes en tu laptop. Luego de crear las claves con <code>ssh-keygen</code>.) Ahora crea (o editalo si ya existe), el archivo <code>.ssh/autorized_keys</code> y pega todo el contenido de tu archivo <code>id_dsa.pub</code>, de modo tal que quede insertado en una sola línea. Una vez que lo hayas hecho, podrás conectarte a tu host remoto, solamente lanzando:

<code>
$ ssh miuser@mihost.midominio.com
</code>

Y no tendrás nunca más que ingresar tu contraseña. A menos que hayas decidido incluir una <code>passphrase</code>, en cuyo caso se te pedirá la misma passphrase una sola vez.

Voilá y enjoy!

