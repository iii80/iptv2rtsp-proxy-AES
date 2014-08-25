iptv2rtsp-proxy-AES
===================

Fork was not possible. So i started my own with the latest master i had.


Quick Start
===========

* Download the source.
* Change line 369 and 370 in src/cs378x.c to reflect your user and pass and remove the comment else it won't work.

>369 	char * user = "user"; // TODO move to config file
>
>370 	char * pass = "pass"; // TODO move to config file

* Change line 196 in src/mpegio.c to reflect your server IP and Port and remove the comment else it won't work.

>196 	this->client_sockfd = cs378x_connect_client(SOCK_STREAM, "1.1.1.1", "1111"); // TODO move to config file 

* Compile it with GNU make and GCC. This should produce a binary named iptv2rtsp-proxy.
* You can copy the binary to any suitable place or keep it with source for testing.
* Run server with

    $ ./iptv2rtsp-proxy -f -s \<YOUR_IP> -l \<LISTEN_PORT>

    for example:

    $ ./iptv2rtsp-proxy -f -s 192.168.10.10 -l 5555

* Connect by opening an url in your media player:

    rtsp://<SERVER_IP>:<LISTEN_PORT>/iptv/<MCAST_GROUP>/<UDP_PORT>

    for example:

    rtsp://192.168.0.1:5555/iptv/224.50.50.50/1234

    or

    http://192.168.0.1:5555/iptv/224.50.50.50/1234

    or

    http://192.168.0.1:5555/udp/224.50.50.50:1234

Configuration
=============

See iptv2rtsp-proxy.conf for details.

Random notes
============

-f option tells server to stay in foreground, you'll see diagnostic
output in your terminal, press Ctrl+C to terminate.

-s is not an IP address servers listens connections on - it's used
as SDP origin. Server listens on any address.

-l specifies RTSP port. The default is 554, this means that you need
a root privileges to start a server, so 5555 is used in the example above.

options -c and -p can be used to specify names of config and pid files.

If for any reason you need to connect to the server and you are behind
a NAT make sure your NAT supports RTSP protocol (often they're not).
For Linux you can install NAT helper: http://mike.it-loops.com/rtsp/.
Please note: if using non-standart RTSP port number this port must
be specified as nf_conntrack_rtsp option.

Thanks
===================

To the original author of this version who wishes to remain unknown.
