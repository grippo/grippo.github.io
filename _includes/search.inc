<form action="{{ site.production_url }}/results.html" id="cse-search-box">
  <div>
    <input type="hidden" name="cx" value="{{ site.google_partner_pub }}:{{ site.google_cse_id }}" />
    <input type="hidden" name="cof" value="FORID:10" />
    <input type="hidden" name="ie" value="UTF-8" />
    <input type="text" name="q" />
    <input type="submit" name="sa" value="Buscar" />
  </div>
</form>
<script type="text/javascript" src="http://www.google.com/coop/cse/brand?form=cse-search-box&lang=es"></script>

