#pragma once
#include <string>
#include <iostream>
#include <vector>

class Account 
{
// Data section
public:

private:
	int AccountID;
	int ClientID;
	int Balance;
	int InterestRate;
	int InterestCap;
	int ODLimit;
	time_t CreateDate;
	time_t LastAccess;



// Methods section
public:
	Account();
	Account(int Client, int val);

	virtual ~Account();

	virtual void SetAccountID();
	virtual void Deposit();
	virtual void Withdraw();
	virtual void Transfer();
	virtual void Update(int val);

	virtual void ViewBalances();

	// For Current Account types only
	virtual void ViewStatement();
	virtual void Payment();
private:

};

