#include "Account.h"
#include "TestData.h"


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

void Account::Deposit(int val) {
	// Add value to Account
	// Add entry to Transaction Database

	Balance += val;

	cout << "Parent Deposit Done! Value"<< float(float(val) / 100)<<endl;


}

void Account::Withdraw(int val) {
	// Withdraw value from balance
	// Add to transaction database
	Balance -= val;
	cout << "Parent Withdraw Done! Value = " << float(val / 100) << endl;
}

void Account::Transfer(int val) {
	// Add value to Account
	// Withdraw value from balance
	// Add to transaction database
	cout << "Parent Transfer Done! Value = " << float(val / 100) << endl;
}

void Account::Update(int val) {
	// Calculate interest rates

	cout << "Parent Update Done! Value = " << endl;
}

void Account::ViewBalances() {
	// Print account balance
	cout << "Parent Balances Done! Value = " << Balance << endl;
}

// For Current Account types only
void Account::ViewStatement() { 
	cout << "Statement Done" << endl; 
}

void Account::Payment() { 
	cout << "Payment Done" << endl; 
}