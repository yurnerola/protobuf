#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{
	int clientfd=socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in servaddr;
	servaddr.sin_family=AF_INET;
	servaddr.sin_port=htons(9999);
	inet_pton(AF_INET,"127.0.0.1",&servaddr.sin_addr);

	connect(clientfd,(struct sockaddr *)&servaddr,sizeof(servaddr));

	send(clientfd,"1234567890",sizeof("1234567890"),0);
	return 0;
}
