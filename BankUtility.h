#pragma once
#include <vector>
#include <string>
#include "Client.h"
#include "Account.h"

extern int gAcct;
extern int gClient;
extern std::vector<Client> ClientDB;
extern std::vector<Account> AccountsDB;

void AddAccount(int client, int value) {
	//Account *Acct1 = new Account(client, value);
	if (gClient==0 || client != gClient){
		cout << "Error: Invalid or mmismatched Client ID!" << endl;
		return;
	}
	Account Acct1(client, value);
	AccountsDB.push_back(Acct1);
}

void AddClient(std::string forename, std::string surname, std::string username) {
	//Client *client1 = new Client(forename, surname, username);
	Client client1(forename, surname, username);
	ClientDB.push_back(client1);
}

void findClient() {
	std::vector<Client>::iterator client;
	for (client = ClientDB.begin(); client != ClientDB.end(); client++) {
		if (gClient == 0) {
			std::cout << "ERROR: Client ID not specified! " << std::endl;
			return;
		}
		if (client->ClientID == gClient) {
			cout << "Found Client ID = " << client->ClientID << "; "
				<< "U-Name = " << client->username << "; "
				<< "Pin = " << client->pin << "; "
				<< endl;
		}

	}
}

void listClients() {
	std::vector<Client>::iterator client;
	for (client = ClientDB.begin(); client != ClientDB.end(); client++)	{
		cout << "Found Client ID = " << client->ClientID << "; "
			<< "U-Name = " << client->username << "; "
			<< "Pin = " << client->pin << "; "
			<< endl;
	}
}


void listAccounts() {
	std::vector<Account>::iterator acct;
	for (acct = AccountsDB.begin(); acct != AccountsDB.end(); acct++)
	{
		cout << "Found Account ID = " << acct->AccountID
			<< "  Balance = " << acct->Balance
			<< endl;

		if (acct->AccountID == gAcct)
		{
			cout << "Found Account ID = " << acct->AccountID << endl;
			//return *acct;
		}
	}
}
