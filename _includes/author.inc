{% if page.author == 'Andrea' %}
<div class="row txf_noads">
	<div class="col-sm-3">

		<A HREF="https://plus.google.com/u/4/107607444967243020436" rel="me nofollow" title="Andrea Burdman">
		<img src="http://www.psiconotas.com/wp-content/andrea.png" class="img-rounded" width="90" alt="Andrea Burdman" /><br />
		</A>
		<br />
	</div>
	<div class="col-sm-9">
		<table class="table table-bordered">
			<tr><td><i class="glyphicon glyphicon-user"></i> por <a href="https://plus.google.com/u/4/107607444967243020436?rel=author">Andrea Burdman</A></td></tr>
			<tr><td><i class="glyphicon glyphicon-calendar"></i> <time pubdate="pubdate">{{ page.date | date_to_string }}</time></td></tr>
		</table>              	
	</div>
</div>
{% else %}
<div class="row txf_noads">
	<div class="col-sm-3">
		<A HREF="http://www.linkedin.com/in/grippo" rel="me nofollow" title="Jorge Grippo en LinkedIn">
		<img src="https://lh5.googleusercontent.com/-NbTZzB-k73k/AAAAAAAAAAI/AAAAAAAAIl8/g3W9uwPyTKw/photo.jpg?sz=50" class="img-rounded" width="90" alt="Jorge Grippo" /><br />
		</A>
		<br />
	</div>
	<div class="col-sm-9">
		<table class="table table-bordered">
			<tr><td><i class="glyphicon glyphicon-user"></i> por <a href="https://plus.google.com/+jorgegrippo?rel=author">Jorge Grippo</A></td></tr>
			<tr><td><i class="glyphicon glyphicon-calendar"></i> <time pubdate="pubdate">{{ page.date | date_to_string }}</time></td></tr>
		</table>              	
	</div>
</div>
{% endif %}
