#include "Account.h"

Account::Account()
{
}

Account::~Account()
{
}

void Account::Deposit() {
	cout << "Parent Deposit Done"<<endl;
}

void Account::Withdraw() {
	cout << "Parent Withdraw Done" << endl;
}

void Account::Transfer() {
	cout << "Parent Transfer Done" << endl;
}

void Account::Update() {
	cout << "Parent Update Done" << endl;
}

void Account::ViewBalances() {
	cout << "Parent Balances Done" << endl;
}

// For Current Account types only
void Account::ViewStatement() { 
	cout << "Statement Done" << endl; 
}

void Account::Payment() { 
	cout << "Payment Done" << endl; 
}