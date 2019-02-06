{% if site.disqus_comments %}
<div class="panel panel-info">
	<div class="panel-heading">
		<h4 class="panel-title">Com&eacute;ntalo ahora</h4>
	</div>
	<div class="panel-body">
    <div id="disqus_thread"></div>
<script type="text/javascript">
        var disqus_shortname = '{{ site.disqus_shortname }}'; 
        (function() {
            var dsq = document.createElement('script'); dsq.type = 'text/javascript'; dsq.async = true;
            dsq.src = '//' + disqus_shortname + '.disqus.com/embed.js';
            (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(dsq);
        })();
</script>
    
	</div>
</div>
{% endif %}