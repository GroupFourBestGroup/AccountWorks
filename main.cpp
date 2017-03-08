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
bool gLogin=false;
int gAcct=0;
int gClient=0;
std::vector<Client> ClientDB;
std::vector<Account> AccountsDB;

int main()
{
	
	/* START Test data	*/
	AddClient("Marc", "Chapman", "ChunkyChip");
	//AddClient("Daryl", "Conway", "DefconGinger");
	//AddClient("Ryan", "Wooton", "JollyGreen");
	
	listClients();

	//gClient = 1;

	AddAccount(Current, 1, 100000);
	AddAccount(Savings, 1, 100000);
	AddAccount(Savings, 1, 10000);

	//listAccounts();
	//cout << endl;

	gClient = 1;
	for (int i = 0;  i <= ClientDB.size(); i++) {
		gAcct = i;
		AccountsDB[i].Deposit(10000);
		findAccount();
	}
	
	//listAccounts();

	cout << endl;

	/* END	Test data	*/

	/**
	*	Set up Application starting conditions
	*/
	int MenuState = 99;
	// Draw Initial Menu
	
	//DrawMainMenu(); 
	cin >> MenuState;
	while (MenuState != 0){
		int val=0;

		switch (MenuState){
		case(1):
			// Validate User
			// Set gClient
			// Display Account Selection menu
			// Validate Account
			// set gAccount
			// Set gLogin=true			
			// Set
			break;
			
		case(11):						// Deposit
			DrawDepositMenu();
			// enter value
			
			cin >> val;
			if (val > 0) {
				AccountsDB[gAcct].Deposit(val);
				// Validate
			}
			break;

		case(12):						// Withdraw
			DrawWithdrawMenu();
			cin >> val;
			if (val < 0) {
				AccountsDB[gAcct].Withdraw(val);
			}
			break;

		case(13):						// Transfer
			cin >> val;
			if (val < 0) {
				// FIXME
				//AccountsDB[gAcct].Transfer(val);
			}
			break;

		case(14) :						// Payment
			DrawPaymentMenu();
			cin >> val;
			if (val < 0) {
				AccountsDB[gAcct].Payment(val);
			}
			break;

		case(15):						// Statement
			DrawInfoMenu();
			cin >> val;
			if (val >= 0 || val <= 11) {
				AccountsDB[gAcct].ViewStatement(val);
			}
			else {
				cout << "Error: Incorrect month specified, please try again" << endl;
			}			
			break;

		case(0):						// Exit Program
			if (gLogin == true){
				
			}
			else{
				cout << "---------- EXITING ----------" << endl << endl;
			}
			break;

		default:						// Abandon all hope all ye who enter here
			cout << "---------- ERROR OCCURED ----------" <<endl<<endl;
			break;
		}


		
	}


    return 0;
}


