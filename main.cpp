
#include "targetver.h"
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <time.h>

#include "DrawMenus.h"
#include "TestData.h"

#include "AccCurrent.h"
#include "AccSavings.h"

using std::cout;
using std::cin;
using std::endl;



int main()
{
	//Account TestAccount;
	int MenuState = 99;

	/*
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

	*/

	LoadData();
	cin >> MenuState;
    return 0;
}


