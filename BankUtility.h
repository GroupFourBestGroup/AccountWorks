#pragma once
#include <vector>
#include <string>
#include "Client.h"
#include "Account.h"

extern int gAcct;
extern int gClient;
extern std::vector<Client> ClientDB;
extern std::vector<Account> AccountsDB;

/**
* Deposit a value into the account.
* @param client ClientID of account owner
* @param val an integer value in pence
*/
inline void AddAccount(int client, int value) {
	if (gClient==0 || client != gClient){
		cout << "Error: Invalid or mmismatched Client ID!" << endl;
		return;
	}
	Account Acct1(client, value);
	AccountsDB.push_back(Acct1);
}

/**
* Deposit a value into the account.
* @param forename string personal details
* @param surname string personal details
* @param username string used for logging into system.
*/
inline void AddClient(std::string forename, std::string surname, std::string username) {
	Client client1(forename, surname, username);
	ClientDB.push_back(client1);
}

/**
* Find a single client using global variable gClient.
*/
inline void findClient() {
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

/**
* List all known clients
*/
inline void listClients() {
	for(int i=0; i < ClientDB.size(); i++){
		cout << "Found Client ID = " << ClientDB[i].ClientID << "; "
			<< "U-Name = " << ClientDB[i].username << "; "
			<< "Pin = " << ClientDB[i].pin << "; "
			<< endl;
	}
}

/**
* List all known clients
*/
inline void listClients2() {
	std::vector<Client>::iterator client;
		for (client = ClientDB.begin(); client != ClientDB.end(); client++)	{
		cout << "Found Client ID = " << client->ClientID << "; "
			<< "U-Name = " << client->username << "; "
			<< "Pin = " << client->pin << "; "
			<< endl;
	}
}

/**
* List all known Accounts
*/
inline void listAccounts() {
	std::vector<Account>::iterator acct;
	for (acct = AccountsDB.begin(); acct != AccountsDB.end(); acct++)
	{
		cout << "Found Account ID = " << acct->AccountID
			<< "  Balance = " << acct->Balance
			<< endl;

		if (acct->AccountID == gAcct)
		{
			//cout << "Found Account ID = " << acct->AccountID << endl;
			//return *acct;
		}
	}
}
