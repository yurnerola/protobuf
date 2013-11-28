#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "ASS.hxx.pb.h"
#include <iostream>

#define MAXLINE 1024
#define SERV_PORT 4789
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
		memset(msg, 0, sizeof(msg));
		len=sizeof(clientaddr);
		n=recvfrom(socketfd,msg,MAXLINE,0,(struct sockaddr *)&clientaddr,&len);
		//cout<<msg<<endl;
		string str(msg,msg+n);
		//printf("msg: %s, str: %s, n: %d\n", msg, str.c_str(), n);
		//string str(msg);
		cout<<str<<endl;
		PBRequest msg_decoding;
		msg_decoding.ParseFromString(str);
		cout<<"msg header:"<<msg_decoding.header()<<endl;
		cout<<"msg id:"<<msg_decoding.id()<<endl;
		cout<<"msg message:"<<msg_decoding.message()<<endl;
		
	  	PBResponse response;
		response.set_header(0x02);
		response.set_id(msg_decoding.id());
		response.set_result(true);
		
		string str_msg;
		response.SerializeToString(&str_msg);
		sendto(socketfd,str_msg.c_str(),str_msg.size(),0,(struct sockaddr *)&clientaddr,len);
	}
	return 0;
}


