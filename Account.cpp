#include "Account.h"

using std::cout;
using std::endl;


Account::Account()
{	
	SetAccountID();
	ClientID=1;
	Balance=0;
	InterestRate=0;
	InterestCap=0;
	ODLimit=0;
	//CreateDate=date;
	//LastAccess=date;
}

Account::Account(int Client, int val)
{
	SetAccountID();
	ClientID = 1;
	Balance = 0;
	InterestRate = 0;
	InterestCap = 0;
	ODLimit = 0;
	//CreateDate=date;
	//LastAccess=date;
}


Account::~Account()
{
}

void Account::SetAccountID() {
	AccountID = AccountID + 1;
}

void Account::Deposit() {
	// Add value to Account
	// Add entry to Transaction Database
	cout << "Parent Deposit Done"<<endl;

}

void Account::Withdraw() {
	// Withdraw value from balance
	// Add to transaction database
	cout << "Parent Withdraw Done" << endl;
}

void Account::Transfer() {
	// Add value to Account
	// Withdraw value from balance
	// Add to transaction database
	cout << "Parent Transfer Done" << endl;
}

void Account::Update(int val) {
	// Calculate interest rates

	cout << "Parent Update Done" << endl;
}

void Account::ViewBalances() {
	// Print account balance
	cout << "Parent Balances Done" << endl;
}

// For Current Account types only
void Account::ViewStatement() { 
	cout << "Statement Done" << endl; 
}

void Account::Payment() { 
	cout << "Payment Done" << endl; 
}