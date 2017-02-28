#pragma once
#include <string>
#include <iostream>
#include <vector>

class Account 
{
// Data section
public:
	static int TotalAccounts;
	int AccountID;
	int ClientID;
	int Balance;
	int InterestRate;
	int InterestCap;
	int ODLimit;
	time_t CreateDate;
	time_t LastAccess;

private:


// Methods section
public:
	Account();
	Account(int Client, int val);

	virtual ~Account();

	virtual int getAcctID();
	virtual void SetAccountID();
	virtual void Deposit(int val);
	virtual void Withdraw(int val);
	virtual void Transfer(int val, int AccID);
	virtual void Update(int rate);

	virtual void ViewBalances();

	// For Current Account types only
	virtual void ViewStatement(int month);
	virtual void Payment(int Account);
private:

};

