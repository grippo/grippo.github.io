--- 
layout: post
title: "Redescubrí reCAPTCHA.net"
permalink: /2010/04/08/redescubri-recaptcha-net/
author: Jorge Grippo
date: 2010-04-08 17:50:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Noticias

---
<!-- 134 -->
<i>CAPTCHA, es una solución para hacer stop a robots. Programáticamente responde a la pregunta "¿El usuario es humano o robótico?".</i><br />
<br />
Justo ayer viendo algunos videos de <a href="http://www.youtube.com/user/GoogleWebmasterHelp">Matt Cutts</a>, en uno dedicado a responder por qué Google no usa reCAPTCHA.net, me dí cuenta que nunca habáa podido usar reCAPTCHA, porque solo estaba disponible en inglés. Ahora está disponible en español, asique, ¿por qué en vez de usar una librería local, no uso un webservice para implementar <a href="http://www.captcha.net/">CAPTCHA</a> en mi siito? Bueno para que veas que bien funciona, una implementación de ejemplo en Perl, es así:<br />
<br />
Requisitos:<br />
<br />
<ol><li>Ingresar en reCAPTHA.NET, inscribirse y agregar tu sitio.</li>
<li>Instalar el modulo Perl Captcha::reCAPTCHA</li>
</ol><br />
Ejemplo: captcha.cgi<br />
<code><br />
#!/usr/bin/perl<br />
<br />
use strict;<br />
use CGI qw/:standard/;<br />
use Captcha::reCAPTCHA;<br />
<br />
my $c = Captcha::reCAPTCHA-&gt;new;<br />
my %o = ('lang' =&gt; 'es', 'theme' =&gt; 'clean');<br />
<br />
# Output form<br />
# get_html( $pubkey, $error, $use_ssl, $options )<br />
print header,<br />
start_html('A Simple Example'),<br />
h1('A Simple Example'),<br />
start_form,<br />
"What's your name? ",textfield('name'),p,<br />
"What's the combination?", p,<br />
checkbox_group(-name=&gt;'words',<br />
-values=&gt;['eenie','meenie','minie','moe'],<br />
-defaults=&gt;['eenie','minie']), p,<br />
"What's your favorite color? ",<br />
popup_menu(-name=&gt;'color',<br />
-values=&gt;['red','green','blue','chartreuse']),p,<br />
$c-&gt;get_html( 'AQUI PONES TU CLAVE PUBLICA', undef, undef, %o),<br />
submit,<br />
end_form,<br />
hr;<br />
<br />
if (param()) {<br />
my $name      = param('name');<br />
my $keywords  = join ', ',param('words');<br />
my $color     = param('color');<br />
print "Your name is",em(escapeHTML($name)),p,<br />
"The keywords are: ",em(escapeHTML($keywords)),p,<br />
"Your favorite color is ",em(escapeHTML($color)),<br />
hr;<br />
<br />
my $result = $c-&gt;check_answer(<br />
'AQUI PONES TU CLAVE PRIVADA', $ENV{'REMOTE_ADDR'},<br />
param('recaptcha_challenge_field'),<br />
param('recaptcha_response_field')<br />
);<br />
<br />
if ( $result-&gt;{is_valid} ) {<br />
print "Yes!";<br />
} else {<br />
# Error<br />
my $error = $result-&gt;{error};<br />
print "Error " . $error ;<br />
}<br />
<br />
}<br />
print end_html;<br />
<br />
</code>

