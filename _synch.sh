#!/bin/sh

mys3="s3://blog.grippo.com"

# cd /home/grippo/grippo/blog.grippo.com

# Run Jekyll
echo "-> Running Jekyll"
svn up
jekyll build


# Upload to S3!
echo "\n\n-> Uploading to S3"

# Sync media files first (Cache: expire in 10weeks)
echo "\n--> Syncing media files..."
s3cmd sync -v --acl-public --exclude '*.*' --include '*.png' --include '*.jpg' --include '*.ico' --rexclude "^\." --rexclude "\/\." --add-header="Expires: Sat, 20 Nov 2020 18:46:39 GMT" --add-header="Cache-Control: max-age=6048000"  _site/ ${mys3}

# Sync Javascript and CSS assets next (Cache: expire in 1 week)
echo "\n--> Syncing .js files..."
s3cmd sync -v --acl-public --exclude '*.*' --include '*.js'  --rexclude "^\." --rexclude "\/\." --add-header="Cache-Control: max-age=604800" --mime-type="application/javascript"  _site/ ${mys3}

echo "\n--> Syncing .css files..."
s3cmd sync -v --acl-public --exclude '*.*' --include  '*.css' --rexclude "^\." --rexclude "\/\." --add-header="Cache-Control: max-age=604800" --mime-type="text/css" _site/ ${mys3}


# Sync html files (Cache: 2 hours)
echo "\n--> Syncing .html"
s3cmd sync -v --acl-public --exclude '*.*'  --include  '*.html' --rexclude "^\." --rexclude "\/\." --add-header="Cache-Control: max-age=7200, must-revalidate"  _site/ ${mys3}

# Sync: remaining files & delete removed
echo "\n--> Syncing remaining files"
# s3cmd sync --dry-run -v --acl-public --delete-removed --rexclude "^\." --rexclude "\/\."  _site/ ${mys3}
s3cmd sync  -v --acl-public --rexclude "^\." --rexclude "\/\." _site/ ${mys3}


