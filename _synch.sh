#!/bin/sh

# cd /home/grippo/grippo/iniciar.co

# Run Jekyll
echo "-> Running Jekyll"
svn up
jekyll build --incremental

# Upload to S3!
echo "\n\n-> Uploading to S3"

# Sync media files first (Cache: expire in 10weeks)
echo "\n--> Syncing media files..."
s3cmd sync -v --acl-public --exclude '*.*' --include '*.png' --include '*.jpg' --include '*.ico' --rexclude "^\." --rexclude "\/\." --add-header="Expires: Sat, 20 Nov 2020 18:46:39 GMT" --add-header="Cache-Control: max-age=6048000"  _site/ s3://iniciar.co/psiconotas.com/

# Sync Javascript and CSS assets next (Cache: expire in 1 week)
echo "\n--> Syncing .js and .css files..."
s3cmd sync -v --acl-public --exclude '*.*' --include  '*.css' --include '*.js' --rexclude "^\." --rexclude "\/\." --add-header="Cache-Control: max-age=604800"  _site/ s3://iniciar.co/psiconotas.com/


# Sync html files (Cache: 2 hours)
echo "\n--> Syncing .html"
s3cmd sync -v --acl-public --exclude '*.*'  --include  '*.html' --rexclude "^\." --rexclude "\/\." --add-header="Cache-Control: max-age=7200, must-revalidate"  _site/ s3://iniciar.co/psiconotas.com/

# Sync: remaining files & delete removed
echo "\n--> Syncing remaining files"
s3cmd sync -v --acl-public --delete-removed --rexclude "^\." --rexclude "\/\."  _site/ s3://iniciar.co/psiconotas.com/


