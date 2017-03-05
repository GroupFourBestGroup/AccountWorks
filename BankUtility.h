#pragma once
#include <vector>
#include <string>
#include "Client.h"
#include "Account.h"

extern int gAcct;
extern int gClient;
extern Client *UseClient;
extern Account *UseAccount;
extern std::vector<Client> ClientDB;
extern std::vector<Account> AccountsDB;

/**
* Deposit a value into the account.
* @param client ClientID of account owner
* @param val an integer value in pence
*/
void AddAccount(int client, int value) {
	//Account *Acct1 = new Account(client, value);
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
void AddClient(std::string forename, std::string surname, std::string username) {
	//Client *client1 = new Client(forename, surname, username);
	Client client1(forename, surname, username);
	ClientDB.push_back(client1);
}

/**
* Find a single client using global variable gClient.
*/
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

/**
* List all known clients
*/
void listClients() {
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
