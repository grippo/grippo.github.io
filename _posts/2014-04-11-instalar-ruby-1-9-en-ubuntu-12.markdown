---
layout: post
title: Instalar Ruby 1.9.x en Ubuntu 12.x
---

Ubuntu 12 viene con Ruby 1.8.7 y eso es un problema, porque las versiones 1.9 son mucho m&aacute;s
modernas, tienen menos bugs y son mucho m&aacute;s veloces. Con la siguiente receta, podr&iacute;as conseguir
tener en tu sistema &uacute;nicamente la version 1.9.3 y dejar de convivir con m&uacute;ltiples versiones
con RVM o rbenv.

<!-- more -->

<pre>
sudo apt-get update

sudo apt-get install ruby1.9.1 ruby1.9.1-dev \
  rubygems1.9.1 irb1.9.1 ri1.9.1 rdoc1.9.1 \
  build-essential libopenssl-ruby1.9.1 libssl-dev zlib1g-dev

sudo update-alternatives --install /usr/bin/ruby ruby /usr/bin/ruby1.9.1 400 \
         --slave   /usr/share/man/man1/ruby.1.gz ruby.1.gz \
                        /usr/share/man/man1/ruby1.9.1.1.gz \
        --slave   /usr/bin/ri ri /usr/bin/ri1.9.1 \
        --slave   /usr/bin/irb irb /usr/bin/irb1.9.1 \
        --slave   /usr/bin/rdoc rdoc /usr/bin/rdoc1.9.1

# elegir version
# cambiar symlinks de /usr/bin/ruby , /usr/bin/gem
# /usr/bin/irb, /usr/bin/ri y man (1) ruby
sudo update-alternatives --config ruby
sudo update-alternatives --config gem

# ahora si!
ruby --version
</pre>
