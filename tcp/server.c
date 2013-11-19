#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define MAXLINE 1024
int main(int argc,char *argv[])
{	
	int connfd;
	int servfd=socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in servaddr;

	servaddr.sin_family=AF_INET;
	servaddr.sin_addr.s_addr=INADDR_ANY;
	servaddr.sin_port=htons(9999);

	bind(servfd,(struct sockaddr *)&servaddr,sizeof(servaddr));

	listen(servfd,10);

	char msg[MAXLINE];
	int n;
	while(1)
	{
		msg[0]='\0';
		connfd=accept(servfd,(struct sockaddr *)NULL,NULL);
		n=read(connfd,msg,3,0);
		msg[n]='\0';
		printf("%s\n",msg);
		n=read(connfd,msg,3,0);
		msg[n]="\0";
		printf("%s\n",msg);
	}
	return 0;
}

