iptv2rtsp-proxy-AES
===================

Fork was not possible. So i started my own with the latest master i had.

Pre-compile
===================

Change line 369 and 370 in src/cs378x.c to reflect your user and pass and remove the comment else it won't work.

	369 	char * user = "user"; // TODO move to config file
	370 	char * pass = "pass"; // TODO move to config file

Change line 196 in src/mpegio.c to reflect your server IP and Port and remove the comment else it won't work.

	196 	this->client_sockfd = cs378x_connect_client(SOCK_STREAM, "1.1.1.1", "1111"); // TODO move to config file 

After you have made the necessary changes you can use the make command to compile.

Thanks
===================

To the original author of this version who wishes to remain unknown.
