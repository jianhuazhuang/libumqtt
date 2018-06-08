# libumqtt

[1]: https://img.shields.io/badge/license-LGPL2-brightgreen.svg?style=plastic
[2]: /LICENSE
[3]: https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=plastic
[4]: https://github.com/zhaojh329/libumqtt/pulls
[5]: https://img.shields.io/badge/Issues-welcome-brightgreen.svg?style=plastic
[6]: https://github.com/zhaojh329/libumqtt/issues/new
[7]: https://img.shields.io/badge/release-0.1.0-blue.svg?style=plastic
[8]: https://github.com/zhaojh329/libumqtt/releases
[9]: https://travis-ci.org/zhaojh329/libumqtt.svg?branch=master
[10]: https://travis-ci.org/zhaojh329/libumqtt

[![license][1]][2]
[![PRs Welcome][3]][4]
[![Issue Welcome][5]][6]
[![Release Version][7]][8]
[![Build Status][9]][10]

[libubox]: https://git.openwrt.org/?p=project/libubox.git
[ustream-ssl]: https://git.openwrt.org/?p=project/ustream-ssl.git
[openssl]: https://github.com/openssl/openssl
[mbedtls]: https://github.com/ARMmbed/mbedtls
[CyaSSl(wolfssl)]: https://github.com/wolfSSL/wolfssl

A Lightweight and fully asynchronous MQTT 3.1.1 client C library based on libubox for Embedded Linux.
Support QoS 0, 1 and 2. Support ssl. And it also supports Lua API.

`Keep Watching for More Actions on This Space`

# Dependencies
* [libubox]
* [ustream-ssl] - If you need to support SSL
* [mbedtls] - If you choose mbedtls as your SSL backend
* [CyaSSl(wolfssl)] - If you choose wolfssl as your SSL backend
* [openssl] - If you choose openssl as your SSL backend


# How to build and install
## For Linux distribution: Ubuntu, Debian, ArchLinux, Centos

    wget -qO- https://raw.githubusercontent.com/zhaojh329/libumqtt/master/tools/install.sh | sudo bash


Build example
    
    git clone https://github.com/zhaojh329/libumqtt.git
    cd libumqtt && cmake . && make

Run example

	./example/helloworld

## For Embedded Linux Platform
You need to cross compiling by yourself

# Contributing
If you would like to help making [libumqtt](https://github.com/zhaojh329/libumqtt) better,
see the [CONTRIBUTING.md](/CONTRIBUTING.md) file.

# QQ group: 153530783

# If the project is helpful to you, please do not hesitate to star. Thank you!
