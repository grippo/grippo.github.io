--- 
layout: post
title: "Calculating RAM size for mysqld"
permalink: /2012/04/24/calculating-ram-size-for-mysqld/
author: Jorge Grippo
date: 2012-04-24 19:15:50
comments: true
sharing: true
footer: true
status: publish
type: post
published: true
categories: 
- mysql
- Programming
- my.cnf
- mysqld
- RAM
- sys_admin

---
<!-- 14 -->
The formula seems to be this:

<code>total = innodb_buffer_pool_size + key_buffer_size + innodb_additional_mem_pool_size + innodb_log_buffer_size + (max_connections * (sort_buffer_size + read_buffer_size + binlog_cache_size + maximum_thread_stack_size));
</code>
<!--more-->So, if I have in my mysqld my.cnf configuration file default values --current for version 5.1.61 (values in bytes):

<code>[mysqld]
...
innodb_buffer_pool_size = 8388608
key_buffer_size = 8388608
innodb_additional_mem_pool_size = 1048576
innodb_log_buffer_size = 1048576
max_connections = 151
sort_buffer_size = 2097144
read_buffer_size = 131072
binlog_cache_size = 32768
thread_stack = 262144
...
</code>

total RAM will be 381MB:

<code>total = 8388608 + 8388608 + 1048576 + 1048576 + (151 * (2097144 + 131072 + 32768 + 262144));
total = 18874368 + (151 * (2523128));
total = 18874368 + (151 * (2523128));
total = 18874368 + 380992328;
total = 399866696;</code>

That means too, that we have 18MB overhead for all connections, and then we need 2,4MB per connection.

For a very small server size, with 256MB total RAM size, with Apache, I'll be using for testing, I did this setup (this http server is capable to serve up to 28,800 dynamic requests per hour, and teorethically 691,200 requests per day):

<code>[mysqld]
...
innodb_buffer_pool_size = 0
key_buffer_size = 8388608
innodb_additional_mem_pool_size = 0
innodb_log_buffer_size = 0
max_connections = 18
sort_buffer_size = 524288
read_buffer_size = 131072
binlog_cache_size = 32768
thread_stack = 65536
...</code>

then, it will take 21MB:

<code>total = 8388608 + (18 * (524288 + 131072 + 32768 + 65536));
total = 8388608 + (18 * (753664));
total = 8388608 + 13565952;
total = 21954560;</code>

Here, overhead for all connections is 8MB, as we have not started with innodb, and then just 750Kb for each connection.

Allways try to reserve 20% of total RAM for the OS (Linux, I mean).

