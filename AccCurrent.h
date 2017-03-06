#pragma once
#include "Account.h"
class AccCurrent :
	public Account
{
public:
	AccCurrent();
	AccCurrent(int client, int val);
	~AccCurrent();

	void Deposit(int val) override;
};



