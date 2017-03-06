#pragma once
#include <iostream>

using std::cout;
using std::endl;

void DrawLoginMenu() {
	system("cls");
	cout << "******************************************************************" << endl;
	cout << "**   Login Main Menu                                            **" << endl;
	cout << "******************************************************************" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   please insert your account number.                         **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   If you don't have an account and wish to create one        **" << endl;
	cout << "**   please enter (0)                                           **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "******************************************************************" << endl;

void DrawCreateMenu() {
	system("cls");
	cout << "******************************************************************" << endl;
	cout << "**   Create Account Main Menu                                   **" << endl;
	cout << "******************************************************************" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   To create an account please enter the following details    **" << endl;
	cout << "**   seperated with the (enter) key:                            **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   Account type, 1 for savings, 2 for current                 **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   First name                                                 **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   Last name                                                  **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**   to cancel enter 0 in the account type                      **" << endl;
	cout << "******************************************************************" << endl;	
	
void DrawMainMenu() {
	system("cls");
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

void DrawPayMenu() {
	system("cls");
	cout << "******************************************************************" << endl;
	cout << "**   Current Account transaction menu                           **" << endl;
	cout << "******************************************************************" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**    please insert amount you wish.                            **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**  (enter)to complete transaction               (0) cancel     **" << endl;
	cout << "**                                                              **" << endl;
	cout << "******************************************************************" << endl;
}

void DrawTransferMenu() {
	system("cls");
	cout << "******************************************************************" << endl;
	cout << "**   Current Account Transfer Menu                              **" << endl;
	cout << "******************************************************************" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**    please account number to transfer to.                     **" << endl;
	cout << "**    followed by the amount of money.                          **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**    (enter)compete transaction                 (0) cancel     **" << endl;
	cout << "**                                                              **" << endl;
	cout << "******************************************************************" << endl;	
}

void DrawInfoMenu() {
	system("cls");
	cout << "******************************************************************" << endl;
	cout << "**   Current Account Main Menu                                  **" << endl;
	cout << "******************************************************************" << endl;
	cout << "**                                                              **" << endl;
	cout << "**      current account number -                                **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**      current account holder -                                **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**      current account type -                                  **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**      current account amount -                                **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**                                                              **" << endl;
	cout << "**    (0) back                                                  **" << endl;
	cout << "**                                                              **" << endl;
	cout << "******************************************************************" << endl;	
}
