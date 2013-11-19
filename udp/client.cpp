#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <arpa/inet.h>
#include <string.h>
#include "msg.pb.h"

using namespace std;

#define MAX_LINE 2048
int main()
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	msg::Msg msg_src;
	msg_src.set_header(256);
	msg_src.set_id(1);
	msg_src.set_message("this is a test string");
	string str_msg;
	msg_src.SerializeToString(&str_msg);

	int clientfd=socket(AF_INET,SOCK_DGRAM,0);
	struct sockaddr_in servaddr;

	servaddr.sin_family=AF_INET;
	servaddr.sin_port=htons(8899);
	inet_pton(AF_INET,"127.0.0.1",&servaddr.sin_addr);
	const char *msg=str_msg.c_str();
	//const char *msg="3this is a test string\n";
	printf("%d--%s\n",strlen(msg),msg);
	sendto(clientfd,msg,strlen(msg)+1,0,(struct sockaddr *)&servaddr,sizeof(servaddr));

	return 0;
}
