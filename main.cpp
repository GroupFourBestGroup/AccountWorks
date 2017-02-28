//#include <SDKDDKVer.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>

#include "DrawMenus.h"

#include "Client.h"
#include "AccCurrent.h"
#include "AccSavings.h"

using std::cout;
using std::cin;
using std::endl;

/* GLOBALS */
int gAcct = NULL;


/* START TEST DATA */
std::vector<Client> ClientDB;
Client client1;
Client client2;
Client client3;
Client client4;


std::vector<Account> AccountsDB;

Account test1(12, 10000);
Account test2(13, 20000);
Account test3(15, 15000);
Account test4(17, 25000);
Account test5(19, 30000);
/* END TEST DATA */

bool FindAcct(Account acc)
{
	if (acc.AccountID == gAcct)
		return true;
	else
		return false;
}


//cout << "The first odd value is " << *it << '\n';
/*
Test data
*/

void listAccounts() {
	std::vector<Account>::iterator acct;
	for (acct = AccountsDB.begin(); acct != AccountsDB.end(); acct++)
	{
		cout	<< "Found Account ID = " << acct->AccountID 
				<< "  Balance = " << acct->Balance			
				<< endl;

		if (acct->AccountID == gAcct)
		{
			cout << "Found Account ID = "<< acct->AccountID << endl;
			//return *acct;
		}
	}
}


int main()
{
	int MenuState = 99;

	/*Add test accounts to database*/
	AccountsDB.push_back(test1);
	AccountsDB.push_back(test2);
	AccountsDB.push_back(test3);
	AccountsDB.push_back(test4);
	AccountsDB.push_back(test5);

	listAccounts();
	
	//std::vector<Account>::iterator acct = std::find_if(AccountsDB.begin(), AccountsDB.end(), FindAcct);
	
	

	

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


