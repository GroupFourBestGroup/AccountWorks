/* AdvSE_G4_Workshops.cpp : Defines the entry point for the console application.
*/
#include "targetver.h"
#include <iostream>
#include <stdio.h>

#include "AccCurrent.h"
#include "AccSavings.h"

using std::cout;
using std::cin;
using std::endl;

void DrawMainMenu();

int main()
{
	AccCurrent TestAccount;
	int MenuState = 99;


	while (MenuState != 0)
	{
		DrawMainMenu();
		cin >> MenuState;

		switch (MenuState)
		{
		case(1):
			// Do stuff
			TestAccount.Deposit();
			break;
		case(2):
			// Do stuff
			TestAccount.Withdraw();
			break;

		case(3):
			// Do stuff
			TestAccount.Transfer();
			break;

		case(4) :
			// Do stuff
			TestAccount.Payment();
			break;

		case(5):
			// Do stuff
			TestAccount.ViewStatement();
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
	}

    return 0;
}

void DrawMainMenu() {
	cout << "******************************************************************" << endl;
	cout << "**   Current Account Main Menu                                  **" << endl;
	cout << "******************************************************************" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   (1) Deposit                                                **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   (2) Withdraw                                               **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   (3) Transfer                                               **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   (4) Payment                                                **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   (5) Statements                                             **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   (0) Exit                                                   **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "******************************************************************" << endl;
}
