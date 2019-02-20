--- 
layout: post
title: "Googlebot indexa javascript"
permalink: /2012/09/05/googlebot-indexa-javascript/index.html
author: Jorge Grippo
date: 2012-09-05 20:22:23
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- AWS
- Cloud Computing
- Programming
- javascript
- distributed computing

---
<!-- 415 -->
<div class="alert alert-error"><h2>Actualizado!</h2>
A pocos minutos de publicar el articulo, recibí la desmentida del propio John Mueller. Lamentablemente Googlebot todavía no es tan astuto para hacer lo que yo suponía cuando escribí este artículo. Por lo tanto Googlebot todavía no lee Javascript como yo habia suponido que lo hace. John Mueller es del equipo de desarrollo del buscador Google, asique le creemos. Su intervención en Google Plus <a href="https://plus.google.com/u/0/109831709291698272573/posts/BfdCWeK55k5" target=_blank>aquí</a>. Igual dejo la nota, aunque equivocada por ahora, para un futuro no muy lejano, y porque la idea principal creo que ya es tendencia.
</div>
Confirmado: Googlebot indexa Javascript. Y eso es una muy buena noticia. Si seguís leyendo, te explico por qué. Hace un tiempo escribí sobre esto, pero sólo contaba con declaraciones de Google y no era fácil constatarlo luego en los resultados en búsquedas en Google.<!--more-->

<a href="/wp-content/uploads/2012/09/google-indexa-javascript.png"><img class="aligncenter size-medium wp-image-416" title="google-indexa-javascript" src="/wp-content/uploads/2012/09/google-indexa-javascript-300x160.png" alt="" width="300" height="160" /></a>

Las implicancias para lo que conocemos como cloud computing y distributed computing son importantes e interesantes.

<strong>La prueba</strong>

Primero me remito a las pruebas. En una <a href="/2012/07/28/idea-para-detectar-robo-de-contenidos/index.html#comment-615915611" target="_blank">nota anterior de este mismo blog, hay un comentario de Jesús</a>, que como se trata de comentarios Disqus, está implementado en la página como un código Javascript, provisto por el servidor de comentarios Disqus, un servicio externo a Grippo.com que si no lo conocés, te invitaría a hacerlo lo antes posible. Si <a href="https://www.google.com/search?q=%22y+que+hago+cuando+detecto+el+robo+de+contenido%3F%22" target="_blank">busco esa frase en Google</a>, obtengo como resultado la página de dicho artículo, lo cual prueba en si mismo que Googlebot ha sabido recuperar el texto del comentario que no figura en el código html original de la página alojada en blog.grippo.com, sino que tuvo que ser recuperada ejecutando un script Javascript, que es genérico y que es lo que sí figura realmente en el código html original de dicho artículo. Por supuesto que Googlebot se centra en poder ejecutar statements Document.Write() que son los que producen código html insertable en la página original. Sin embargo no es un asunto trivial. Lo anunciaron hace años y es la primera vez que obtengo una prueba fehaciente de que código complejo, como el script de Disqus haya sido indexado con éxito. Y hace falta mucho más que entender statements Document.Write() para obtener el html de Disqus. Bravo por Googlebot!

<strong>Implicancias en SEO</strong>

Te aconsejaria inspeccionar detenidamente ahora todo el código html que producen los scripts embebidos en tus páginas html. Hace no mucho tiempo, tuve la primera señal de que Googlebot empezaba a entender Document.Write(), cuando aparecieron todas la páginas de www.grippo.com con un texto en el header que decía "Mountain View, California". Y eso se debía a que por medio de un siemple document.write() en el header, se estaba dando cuenta de la ciudad y provincia desde donde se conecta el cliente. En tiempo real. Sin embargo, en manos de Googlebot se indexó "Mountain View, California" y tuve que usar otra estrategia para evitar que ese texto se indexe. Si como autor de tu propio html estabas muy tranquilo por todo el output de Javascript porque era invisible para Googlebot, ahora tenés sí o sí que volver a revisar todo posible problema al indexarse dicho contenido que ahora sí es visible.

<strong>Implicancias tecnológicas</strong>

La computación distribuida. Ni más ni menos. Como desarrollador, no hace mucho tiempo dejaste de hacer el módulo de usuario ¿verdad? La mayoría de las veces, con usar Facebook Connect, o como se llame ahora, es suficiente. Todos ganan. Lo importante es que tu usuario tiene una mejor experiencia registrándote y logueándote en tu sitio y vos trabajás menos desarrollando y manteniendo el sietema de registración y login de tu aplicación. Un claro y vívido ejemplo de computación distribuida. Esto cambia el paradigma anterior, cada vez más te centrás exclusivamente en la lógica de tu aplicación y todo lo demás es responsable de algún agente externo, como es el caso de Facebook login.

Pues bien, al principio de este artículo, te mostré cómo en este blog, los comentarios están implementados a través del servicio de Disqus. Otro ejemplo más, donde una parte importante de la aplicación es delagada en un servidor externo, un tercero que se ocupa, y te desocupa a vos para que te ocupes solamente del corazón de tu aplicación. Lo demás, está en algún otro lado. La pieza fundamental que permite que esto se haga realidad es Javascript.

Ahora que tenemos Facebook para registración y Login, Disques o el mismo Facebook para comentarios. ¿Qué más se te ocurre que podés delegar en un tercero? Esa es la idea. Desde ya que todo servicio de terceros te va a entregar un Javascript para la integración en tu sitio. Pero ahora que estamos seguros que el output html de javascript se integra tan maravillosamente con el html del template original, podés empezar a desarmar tu propia aplicación en servicios y distribuir la carga como sea posible, sin estar atado porque Googlebot luego no lo leería. Esa es la implicancia principal.

Una implicancia derivada, si adherís finalmente a desarrollar web-services en tu propia aplicación, será la definitiva propagación de web-services desde todo tipo de proveedores. Fenómeno que por el momento sólo sitios muy grandes y algunos visionarios más pequeños han ofrecido hasta ahora.

Y finalmente, si ya trabajás en cloud computing, vas a poder delegar tareas a unidades cuyos servers participantes sean cada vez más delgados. El tema del server delgado de por sí vale para un cambio de paradigma. Esta posibilidad de dividir la energía computacional con Javascript en el lado del cliente, te va a dar muchas posibilidad de adelgazar los servers participantes en cada uno de los web-services que deban responder.

