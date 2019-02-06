<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
{% if page.title %}
<title>{{ page.title }}</title>
<meta name="title" content="{{ page.title }}">
{% else %}
<title>{{ site.title }}</title>
<meta name="title" content="{{ site.title }}">
{% endif %}
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bulma/0.7.2/css/bulma.min.css">
<script defer src="https://use.fontawesome.com/releases/v5.3.1/js/all.js"></script>
<link rel="icon" href="{{ site.cdn_url }}/img/favicon.ico" type="image/x-icon">
<link rel="shortcut icon" href="{{ site.cdn_url }}/img/favicon.ico" type="image/x-icon">
<meta property="og:type" content="article" />
{% if page.title %}
<meta property="og:title" content="{{ page.title }}" />
{% else %}
<meta property="og:title" content="{{ site.title }}" />
{% endif %}
<meta property="og:url" content="{{ site.url }}{{ page.url }}" />
<meta property="og:description" content="{{ page.excerpt | strip_html | strip_newlines | truncatewords: 32}}" />
<meta property="og:site_name" content="{{ site.name }}" />
{% if page.og_image %}
<meta property="og:image" content="{{ page.og_image }}" />
{% endif %}
</HEAD>
