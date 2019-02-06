{% include foot.inc %}

</div><!-- /container -->



<div id="fb-root"></div>
<script>
  window.fbAsyncInit = function() {
    FB.init({
      appId      : '{{ site.facebook_app_id }}', // App ID
      channelUrl : '{{ site.production_url }}/channel.html', // Channel File
      status     : true, // check login status
      cookie     : true, // enable cookies to allow the server to access the session
      xfbml      : true  // parse XFBML
    });
    // Additional initialization code here
  };

  // Load the SDK Asynchronously
  (function(d){
     var js, id = 'facebook-jssdk'; if (d.getElementById(id)) {return;}
     js = d.createElement('script'); js.id = id; js.async = true;
     js.src = "//connect.facebook.net/es_LA/all.js";
     d.getElementsByTagName('head')[0].appendChild(js);
   }(document));
</script>

<script type="text/javascript">
window.___gcfg = { lang: 'es-419' };
(function() {
var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
po.src = 'https://apis.google.com/js/plusone.js';
var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
})();
</script>

<script type="text/javascript">
(function() {
var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
po.src = 'https://platform.twitter.com/widgets.js';
var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
})();
</script>


<script src="{{ site.cdn_url }}/static/bootstrap-3.3.4/js/bootstrap.min.js"></script>


<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', '{{ site.google_analytics_id }}', '{{ site.google_analytics_domain }}');
  ga('send', 'pageview');
</script>

<script>
$.ajax({
url: '{{ site.firebase_url }}/{{ site.firebase_table }}.json',
data: {
orderBy: '"url"',
equalTo: '"' + $(location).attr('pathname') + '"'
},
error: function() {
},
dataType: 'json',
success: function(data) {
found = false;
$.each(data, function ( i, val ) {
found = true;
val.counter++;
$( "#counter" ).html(val.counter + ' visitas');
$.ajax({
url: '{{ site.firebase_url }}/{{ site.firebase_table }}/' + i + '.json',
data: JSON.stringify({"counter" : val.counter}),
error: function() {
},
dataType: 'json',
success: function(data) {
},
type: 'PATCH'
});

});
if (! found) {
$( "#counter" ).html("1 visita");
$.ajax({
url: '{{ site.firebase_url }}/{{ site.firebase_table }}.json',
data: JSON.stringify({ "url": $(location).attr('pathname'), "counter" : 1 }),
error: function() {
},
dataType: 'json',
success: function(data) {
},
type: 'POST'
});
}
},
type: 'GET'
});
</script>


</body>
</html>
