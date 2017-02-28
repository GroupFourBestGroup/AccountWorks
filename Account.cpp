#include "Account.h"
#include <time.h>

using std::cout;
using std::endl;

int Account::TotalAccounts = 0;
/**
* Default Constructor
*/
Account::Account(){	
	time_t date=time(0);
	SetAccountID();
	ClientID=0;
	Balance=0;
	InterestRate=0;
	InterestCap=0;
	ODLimit=0;
	CreateDate=date;
	LastAccess=date;
}

/**
* Standard Constructor.
* @param Client ID of the Account owner
* @param val Starting balance of account, defaults to 0 if no value provided
*/
Account::Account(int Client, int val=0){
	time_t date = time(0);
	SetAccountID();
	ClientID = Client;
	Balance = val;
	InterestRate = 0;
	InterestCap = 0;
	ODLimit = 0;
	CreateDate=date;
	LastAccess=date;
}

/**
* Default Destructor
*/
Account::~Account(){
}

int Account::getAcctID()
{
	return AccountID;
}

/**
* Increments and assigns the Account ID.
*/
void Account::SetAccountID() {
	++TotalAccounts;
	AccountID = TotalAccounts;
}

/**
* Deposit a value into the account.
* @param val an integer value in pence
*/
void Account::Deposit(int val) {
	
	Balance += val;
	int pounds, pence;
	pounds = float(val) / 100;
	pence = val - pounds*100;
	cout << pounds <<"."<< pence << " Deposited" << endl;

	cout << "Transaction Complete" << endl;
}

/**
* Withdraw a value from the account.
* @param val an integer value in pence
*/
void Account::Withdraw(int val) {
	// Withdraw value from balance
	// Add to transaction database
	Balance -= val;
	int pounds, pence;
	pounds = float(val) / 100;
	pence = val - pounds * 100;
	cout << pounds << "." << pence << " Deposited" << endl;

	cout << "Transaction Complete" << endl;
}

/**
* Transfer from one acct to another.
* Transfers val from the current account to the target account, 
* both accounts are owned by the same client.
* @param val an integer value in pence
* @param acct The AccountID of the recieving account.
*/
void Account::Transfer(int val, int AccID) {
	// Add value to Account
	// Withdraw value from balance
	// Add to transaction database
	cout << "Parent Transfer Done! Value = " << float(val / 100) << endl;
}

/**
* Update Account.
* This is called when interest rate calculations are needed.
* @param rate a floating point interest rate
*/
void Account::Update(int rate) {
	// Calculate interest rates
	cout << "Parent Update Done! Value = " << endl;
}

/**
* Print Account balance
*/
void Account::ViewBalances() {
	// Print account balance
	cout << "Balance of Account is : -" << Balance << endl;
}

// For Current Account types only
/**
* List account transactions.
* @param month The month for which the transaction list is required.
*/
void Account::ViewStatement(int month) { 
	cout << "Statement Done" << endl; 
}

/**
* Make payments to External Accounts.
* @param Account The Account ID of the account being paid.
*/
void Account::Payment(int Account) { 
	cout << "Payment Done" << endl; 
}