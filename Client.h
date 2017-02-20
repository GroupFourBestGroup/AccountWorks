#pragma once
#include <string>

using std::string;

string name;
class Client
{
	string Forename;
	string Middlename;
	string Surname;
	string uname;
	string password;
	string pin;


public:
	Client();
	~Client();

	void AddClient(){}
	void EditClient() {}

};

