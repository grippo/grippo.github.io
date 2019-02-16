--- 
layout: post
title: "Server time synchronization "
permalink: /2013/06/29/server-time-synchronization/index.html
author: Jorge Grippo
date: 2013-06-29 22:00:35
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- AWS
- Programming
- time
- clock
- synchronization

---
<!-- 460 -->
Web services in the cloud a <strong>very</strong> time sensitive. Because of that, services will not work or run if the call is made with a time not in the current time frame. Server clock needs to be fixed every when and then. The sympthom your clock is not current, is an error message like this:
<pre>Request timestamp: Wed, 27 Mar 2013 19:33:12 GMT expired. It must be within 300 secs/ of server time.</pre>
To make sure the clock on your server is current, a weekly cron job is perfect:
<pre>#-----------------------------------------------
#Min    Hour    Day     Month   Weekday Command
#-----------------------------------------------
25	1	*	*	0	/usr/sbin/ntpdate ntp.ubuntu.com pool.ntp.org</pre>
IMHO it's quicker and better than other solutions, that involve to run a deamon or install a new package.

