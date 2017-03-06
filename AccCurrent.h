#pragma once
#include "Account.h"
class AccCurrent :
	public Account
{
public:
	static int TotalAccounts;
	int type;
	int AccountID;
	int ClientID;
	int Balance;
	int InterestRate;
	int InterestCap;
	int ODLimit;
	time_t CreateDate;
	time_t LastAccess;

	AccCurrent();
	AccCurrent(int client, int val);
	~AccCurrent();

	void Deposit(int val) override;
};



