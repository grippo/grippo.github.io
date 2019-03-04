--- 
layout: post
title: "Code snippet: ec2-consistent-snapshot crontab file"
permalink: /2012/07/01/code-snippet-ec2-consistent-snapshot-crontab-file/index.html
author: Jorge Grippo
date: 2012-07-01 18:43:00
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- Webmasters

---
<!-- 345 -->
I've been using Eric Hammond's guide

<a href="https://aws.amazon.com/articles/1663">Running MySQL on Amazon EC2 with EBS (Elastic Block Store)</a>

for years. It is great if you have to setup a mysql server on EC2. But one thing I couldn't never make work, was the crontab job for making automatized snapshots (a.k.a. backup). Which is a great feature, one of the kind that make the whole process to migrate to cloud computing worthwhile. Because you setup a cron job and forget about backups. Isn't it unvelievable great?

<!--more-->Well, it never worked for me. At least as it is documented. You know, we programmers are lazy. For years it hasn't worked at all. Today I found half an hour, and made it work, this is a code snippet that actually works:

<code>#-----------------------------------------------------------------------------
#Min Hour Day Month Weekday Command
#-----------------------------------------------------------------------------
25 3 * * 0,2,4 /usr/bin/ec2-consistent-snapshot --mysql-master-status-file=/var/lib/mysql/SLAVE.txt --xfs-filesystem /vol --mysql --region us-east-1 --description "$(hostname):/vol $(date --rfc-3339=date)" vol-12345678</code>

The problem was certain mismatched quote characters. I removed the ofending expression and replaced it with "date --rfc-3339=date", ant that is it.

OS: Linux. Flavor: Debian/Ubuntu.

