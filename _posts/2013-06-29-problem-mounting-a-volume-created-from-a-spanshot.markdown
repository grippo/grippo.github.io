--- 
layout: post
title: "Problem mounting a volume created from a spanshot"
permalink: /2013/06/29/problem-mounting-a-volume-created-from-a-spanshot/
author: Jorge Grippo
date: 2013-06-29 20:46:52
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- AWS
- EBS
- EC2
- ubuntu
- Programming
- volume
- spanshot
- unix

---
<!-- 457 -->
This is a quick tip for a condition that is met when you have to restore files in a server from a backed up volume (aka snapshot). When you do this, a problem would arise when you try to mount the new volume.
<pre>root@db000:/etc# mount /dev/sdf
mount: wrong fs type, bad option, bad superblock on /dev/sdf,
missing codepage or helper program, or other error
In some cases useful info is found in syslog - try
dmesg | tail or so</pre>
What's wrong? Maybe you already knew this, but I didn't, and took me ages to discover the problem, under massive pressure to get the server up and running. The problem is that unix volumes need to have a unique id for each volume, and because we create the volume from a snapshot, the id for the restored volume is not unique. The solution is in your fstab, include the <code>nouuid</code> parameter, like this:
<pre>/dev/xvdg /RESTORED xfs noatime,nouuid 0 0</pre>
And then, successfully mount your restored volume.

