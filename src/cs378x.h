/*
 * cs378x.h
 *
 *  Created on: Jul 29, 2014
 *      Author: root
 */

#ifndef CS378X_H_
#define CS378X_H_

int cs378x_connect_client(int socktype, const char *hostname, const char *service);
void cs378x_getcws(int client_sockfd, unsigned char * pkt, unsigned char * cw);

#endif /* CS378X_H_ */
