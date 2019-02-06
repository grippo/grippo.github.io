{% if site.facebook_comments %}
<div class="panel panel-info">
  <div class="panel-heading">
<h4 class="panel-title">Com&eacute;ntalo en tu Facebook</h4>
  </div>
  <div class="panel-body">
<fb:comments href="http:{{ site.production_url }}{{ page.url }}" num_posts="20" simple="true" showform="false" width="100%"></fb:comments>
</div>
</div>
{% endif %}