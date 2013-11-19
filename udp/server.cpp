#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "msg.pb.h"
#include <iostream>

#define MAXLINE 1024
#define SERV_PORT 8899
using namespace std;
int main()
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	int socketfd=socket(AF_INET,SOCK_DGRAM,0);
	struct sockaddr_in servaddr,clientaddr;

	bzero(&servaddr,sizeof(servaddr));

	servaddr.sin_family=AF_INET;
	servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
	servaddr.sin_port=htons(SERV_PORT);

	bind(socketfd,(struct sockaddr *)&servaddr,sizeof(servaddr));

	int n;
	socklen_t len;
	char msg[MAXLINE];
	
	for(;;)
	{
		len=sizeof(clientaddr);
		n=recvfrom(socketfd,msg,MAXLINE,0,(struct sockaddr *)&clientaddr,&len);
		string str(msg,msg+n);
		msg::Msg msg_decoding;
		msg_decoding.ParseFromString(str);
		cout<<"msg header:"<<msg_decoding.header()<<endl;
		cout<<"msg id:"<<msg_decoding.id()<<endl;
		cout<<"msg message:"<<msg_decoding.message()<<endl;
		cout<<"msg reserved:"<<msg_decoding.reserved()<<endl;
	}
	return 0;
}


