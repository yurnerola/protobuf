
//ASS communicate protocol

//request message
message PBRequest 
{
	required uint32 header=1;	//request message header, it must be 0x01
	required uint32 id=2;		//request message id, start with 1
	required bytes message=3;	//request message content
}

//response message
message PBResponse 
{
	required uint32 header=1;	//response message header must be 0x02
	required uint32 id=2;		//response message id, it must be request message id, never change
	required bool result =3;	//message check result
}
