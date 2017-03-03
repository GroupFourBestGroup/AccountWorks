#include "Client.h"

int Client::TotalClients = 0;

Client::Client()
{
}

Client::Client(string Fname, string Sname, string uname)
{
	SetClientID();
	Forename = Fname;
	Surname = Sname;
	username = uname;

	password = "letmein";
	pin = "0000";

}


Client::~Client()
{
}

void  Client::SetClientID() {
	++TotalClients;
	ClientID = TotalClients;
}

