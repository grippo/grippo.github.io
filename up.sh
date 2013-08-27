#!/bin/sh

echo "Staging modified files"
git add -A

echo "Commiting a site build"
git commit -m new 

echo "Pushing commits to remote"
git push origin source
