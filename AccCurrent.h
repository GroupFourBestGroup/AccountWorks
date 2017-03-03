#pragma once
#include "Account.h"
class AccCurrent :
	public Account
{
public:
	AccCurrent();
	~AccCurrent();

	void Deposit(int val);
};



