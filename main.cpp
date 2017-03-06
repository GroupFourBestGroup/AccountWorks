//#include <SDKDDKVer.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>

#include "DrawMenus.h"
#include "BankUtility.h"


#include "Client.h"
#include "AccCurrent.h"
#include "AccSavings.h"

using std::cout;
using std::cin;
using std::endl;

/* GLOBALS */
int gAcct=0;
int gClient=0;
std::vector<Client> ClientDB;
std::vector<Account> AccountsDB;

int main()
{
	int MenuState = 99;

	/* START Test data	*/
	AddClient("Marc", "Chapman", "ChunkyChip");
	//AddClient("Daryl", "Conway", "DefconGinger");
	//AddClient("Ryan", "Wooton", "JollyGreen");
	
	listClients();

	//gClient = 1;

	AddAccount(Current, 1, 100000);
	AddAccount(Savings, 1, 100000);
	AddAccount(Savings, 1, 10000);

	listAccounts();
	cout << endl;

	gClient = 1;
	for (int i = 0;  i <= ClientDB.size(); i++) {
		gAcct = i;
		AccountsDB[i].Deposit(10000);
		findAccount();
	}
	
	listAccounts();

	cout << endl;

	/* END	Test data	*/

	/*
	
	DrawMainMenu(); 
	cin >> MenuState;
	while (MenuState != 0){
		DrawMainMenu();
		switch (MenuState)
		{
			
		case(1):
			// Deposit
			DrawPayMenu();
			// enter value
			int val;
			cin >> val;

			//if (val == 0) break;
			if(val != 0){ test1->Deposit(val); }
				

			break;

		case(2):
			// Withdraw
			DrawPayMenu();
			test1->Withdraw(0);
			break;

		case(3):
			// Transfer
			DrawTransferMenu();
			test1->Transfer(0, 0);
			break;

		case(4) :
			// Payment
			DrawPayMenu();
			test1->Payment(0);
			break;

		case(5):
			// Statement
			DrawInfoMenu();
			test1->ViewStatement(0);
			break;
		case(10):
			// Call Deposit methods
			DrawInfoMenu();
			test1->ViewStatement(0);
			break;

		case(0):
			// Do stuff
			cout << "---------- EXITING ----------" << endl << endl;
			break;

		default:
			cout << "---------- ERROR OCCURED ----------" <<endl<<endl;
			// Bollocks
			break;
		}

		cin >> MenuState;
		
	}

	*/
	  
	cin >> MenuState;
    return 0;
}


