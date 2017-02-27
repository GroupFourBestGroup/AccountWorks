#pragma once
#include <string>

using std::string;

class Client
{
	int ClientID;
	string Forename;
	//string Middlename;
	string Surname;
	string username;
	string password;
	string pin;

public:
	Client();
	Client(string Fname, string Sname, string uname);
	~Client();

	void Client::SetClientID();

	void AddClient(){}
	void EditClient() {}

};

