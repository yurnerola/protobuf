#include "msg.pb.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc,char *argv[])
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	msg::Msg msg_src;
	msg_src.set_id(1);
	msg_src.set_message("this is a test string");
	string str_src;
	msg_src.SerializeToString(&str_src);
	cout<<"msg_src:"<<str_src<<endl;

	msg::Msg msg_decoding;
	msg_decoding.ParseFromString(str_src);
	cout<<"msg id:"<<msg_decoding.id()<<endl;
	cout<<"msg message:"<<msg_decoding.message()<<endl;
	cout<<"msg reserved:"<<msg_decoding.reserved()<<endl;
	return 0;

}


