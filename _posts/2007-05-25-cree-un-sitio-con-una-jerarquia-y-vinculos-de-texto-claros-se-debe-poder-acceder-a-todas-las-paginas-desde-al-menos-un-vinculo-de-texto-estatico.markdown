--- 
layout: post
title: "Cree un sitio con una jerarquía y vínculos de texto claros. Se debe poder acceder a todas las páginas desde al menos un vínculo de texto estático."
permalink: /2007/05/25/cree-un-sitio-con-una-jerarquia-y-vinculos-de-texto-claros-se-debe-poder-acceder-a-todas-las-paginas-desde-al-menos-un-vinculo-de-texto-estatico/
author: Jorge Grippo
date: 2007-05-25 15:43:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters
- buscador google
- diseño web
- pagerank
- seo

---
<!-- 37 -->
El título de este artículo, corresponde a la primera directriz de la página de <a href="http://www.google.com/support/webmasters/bin/answer.py?answer=35769&amp;hlrm=es">directrices para webmasters</a> de Google, en el apartado <b>Directrices de diseño y contenido</b>, la que en su versión en inglés dice: <blockquote>Make a site with a clear hierarchy and text links. Every page should be reachable from at least one static text link.</blockquote>y en español es: <blockquote>Cree un sitio con una jerarquía y vínculos de texto claros. Se debe poder acceder a todas las páginas desde al menos un vínculo de texto estático.</blockquote><h4><span style="font-size:130%;">Qué es <span style="font-style:italic;">jerarquía</span></span></h4><b>Jerarquía</b> es la organización de las páginas que componen el sitio de forma tal que se puedan reconocer intuitivamente el grado de importancia de cada una.

La metáfora de jerarquía más comunmente utilizada en informática en general y en la web en particular, es el "árbol". El árbol tiene una raíz o tronco, de donde se desprenden ramas de diferente grosor, hasta que llegamos finalmente a las hojas.

La página más importante de un sitio generalmente es su <span style="font-weight:bold;">página principal</span> o página de inicio, en inglés <span style="font-style:italic;">home page</span>. Se trata de la raíz o tronco del árbol. Es aquella que se abre automáticamente al navegar un sitio web cuando no se especifica alguna página en particular. Es la página índice, en el sentido de la página de índice que usamos en un libro para obtener información de la estructura interna del libro. Si se trata de un blog, en esta página ponemos todos los temas o categorías, junto con el archivo histórico y los artículos publicados más recientes. Si se trata de una tienda, en esta página van como mínimo las categorías de artículos que están a la venta, junto con vínculos a páginas de contacto y <span style="font-style:italic;">acerca de</span> la tienda.

El siguiente grado de importancia luego de la página principal, son las categorías. Generalmente esas categorías son insertadas en menúes, y ayudan a organizar las páginas de artículo y en la metáfora del árbol, se correponde con las ramas. En el caso de la tienda cada categoría puede desplegar subcategorías de profundidad variable (Telefonia -&gt; Telefonia Celular -&gt; Motorola -&gt; Sin tapa). Si fuera un blog, en este nivel se despliegan los índices de cada categoría o tag o mes en el archivo histórico.

Finalmente llegamos a las hojas, o página de artículo si se trata de un blog, o de una tienda virtual.

Para lograr una perfecta jerarquía, debemos seguir las siguientes reglas:
<ol><li>En la home page incluir links a todas las categorías.</li><li>En los índices de categorías incluir links a todas las subcategorías si las hay y links a los artículos de la categoría actual. Repetir hasta alcanzar el nivel más profundo de subcategorías, asegurándose de linkear a cada uno de los artículos. En cada página debe haber un link de vuelta a la home page, y un link de vuelta a la categoría de orden superior. Desarrollamos así: </li><ol><li>En "Telefonía" hay un link a la home page y a todas las subcategorías, como por ejemplo "Telefonía celular".</li><li>En "Telefonía celular" ponemos link a "Telefonía" y link a la home page, además de links a subcategorías, como "Motorola"</li><li>En la página de "Motorola" ponemos el link a "Telefonía Celular", otro a "Telefonía" y otro a la home page, además de links a las subcategorías, por ejemplo "Sin tapa".</li><li>En la página "Sin tapa", ponemos links a "Motorola", otro a "Telefonía celular", otro a "Telefonía" y otro a la home page, además de los links a todos los artículos de "Telefonia -&gt; Telefonia Celular -&gt; Motorola -&gt; Sin tapa"</li></ol><li>En la página de artículo (hoja del árbol), siempre debe haber un link a toda la cadena de categorías superiores y a la home page. Siguiendo nuestro ejemplo, desarrollamos asi: En la página de un artículo deben figurar los links de vuelta a "Sin tapa", otro a "Motorola", otro a "Telefonía celular", otro a "Telefonía" y otro a la "home page".</li></ol><span style="font-size:130%;"><span style="font-weight:bold;">¿Por qué una buena implementación de la jerarquía es importante?</span></span>

En otro artículo explicamos cómo Google calcula el PageRank o ranking de páginas.

Allí aprendimos que antes de averiguar el valor de cada página en el contexto global de toda la web, Google hace un cálculo preliminar del valor de la página en el contexto reducido del propio dominio al que pertenece la página, al que llamamos <span style="font-style:italic;font-weight:bold;">pagerank interno</span>. El mismo tipo de operación que es aplicado <span style="font-style:italic;">afuera</span> es aplicado primero a las páginas <span style="font-style:italic;">dentro</span> del dominio. Cuentan a favor los links-a-la-página para averiguar el valor de cada página, por lo cual, implementar la jerarquía tipo árbol que desarrollamos anteriormente, es garantía para alcanzar el máximo valor posible o ranking potencial. Si no aplicamos correctamente esta regla, corremos el riesgo de no alcanzar el máximo ranking posible o ranking potencial, obteniendo un valor menor para cada página. Luego, en la ronda de computaciones del algoritmo de Google que tiene que calcular el valor de cada página en el contexto global de toda la web, cada hit a favor de la página le asigna un valor que es una función del pagerank interno. O sea, que <span style="font-weight:bold;">si no logramos que el <span style="font-style:italic;">ranking interno</span> de cada página alcance el <span style="font-style:italic;">ranking potencial</span> de la página,</span> el pagerank de la página se verá afectado de un raquitismo de nacimiento que es perfectamente evitable.

<span style="font-size:130%;"><span style="font-weight:bold;">Vínculos de texto claros</span></span>

En <a href="http://grippoblog.blogspot.com/2007/02/tendencias-de-diseo-web.html">Tendencias de diseño web</a>, explicaba la importancia de los vínculos de texto. El hecho crucial que hemos aprendido es que Google sólo indexa vínculos de texto o vínculos regulares. Los que tienen esta estructura básica:

&lt;a href="http://www.google.com/"&gt;Google&lt;/a&gt;

Es decir, un tag A, con un parámetro href (o sea la dirección de la página), conteniendo un ancla (en inglés <span style="font-style:italic;">anchor</span>, es decir el texto que está entre "&lt;a&gt;" y "&lt;/a&gt;", en este caso "Google"). Un link que no responda a esa estructura, será indexado en forma degradada o directamente no indexado. Por ejemplo, reemplazar el ancla por una imagen, hace que la voz del link se apague. ¿La voz del link? ¡Claro, el pagerank es un sistema de valoración de páginas basado en votos! Si en vez de texto ponemos una imagen, el voto es silencioso. Otro tipo de link degradado, es el link implementado como script, es decir entre  y . Los links comandados desde scripts o directamente plantados en la página luego de la ejecución del script, son invisibles completamente para el proceso de calculo de pagerank de Google. Es decir, es como si no existieran y <span style="font-weight:bold;">no cuentan</span>.

Consejo: si vas a poner un menú implementado como script (Javascript u otro lenguaje), asegurate que las opciones del menú se encuentren dentro de DIVs cuyo atributo <span style="font-style:italic;">visibility</span> sea alternativamente prendido (visibility:display) o apagado (visibility:hidden) por el script. Cualquier otra implementación, especialmente las que usan document.write para generar vistas de los paneles de menúes son invisibles para Google. En el caso de que se deba implementar con document.write, por lo menos asegurate de que cada link del menú sea repetido como vínculo de texto normal. De otro modo Google nunca descubrirá las páginas interiores del sitio.

<span style="font-size:130%;"><span style="font-weight:bold;">Se debe poder acceder a todas las páginas desde al menos un vínculo de texto estático.</span></span>

Links embebidos dentro de objetos tampoco son visibles. Específicamente objetos Flash no son indexados, por eso mencionábamos en el artículo <a href="http://grippoblog.blogspot.com/2007/02/tendencias-de-diseo-web.html">Tendencias de diseño web</a> algunos tips sobre cómo usar y cómo no usar Flash.

<span style="font-size:130%;"><span style="font-weight:bold;">Cree un sitio </span></span>

Comenzamos este sitio explicando la <span style="font-weight:bold;">jerarquía</span>, porque es el concepto clave. Pero la directriz solicita "cree un sitio", y no es una directriz menor.

Cualquier idea que tengas de hacer un sitio basado en contenido no original, es decir usando copy+paste o copiar+pegar, será reconocido por Google como copia y por lo tanto, hablando en términos mecánicos, a la página se le asigna un pagerank cero y se cancela la ejecución del cálculo por medio del algoritmo PageRank para esa página. Las técnicas de copia se refieren por supuesto a la página completa, pero también se reconocen fragmentos copiados. Google es capaz de identificar técnicas de copia y manipulación de copias. Por ejemplo páginas compuestas completamente por fragmentos copiados de otras fuentes. Páginas creadas artificialmente por medio de scripts que leen en forma programática y/o robótica contenidos de otras páginas y las manipulan de cualquier manera para terminar creando páginas compuestas por esos contenidos son descartadas como basura no relevante para nada y eliminadas del index de Google.

Dicho de otra manera, Google es capaz de identificar contenido único y original, de contenido basura copiado. Cualquier intento de manipulación de Pagerank es penalizado, porque afecta la tarea principal del buscador Google, y obviamente la percepción del público de que Google es infalible.

<span style="font-size:130%;"><span style="font-weight:bold;">Resumen ejecutivo</span></span>

Cree un sitio con una estructura tipo árbol, usando vínculos de texto normal.

