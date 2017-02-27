#include "Client.h"



Client::Client()
{
}

Client::Client(string Fname, string Sname, string uname)
{
	Forename = Fname;
	Surname = Sname;
	username = uname;

	password = "letmein";
	pin = "0000";

}


Client::~Client()
{
}

void Client::SetClientID()
{
	ClientID++;
}
