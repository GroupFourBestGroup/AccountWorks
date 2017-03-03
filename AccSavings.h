#pragma once
#include "Account.h"
class AccSavings :
	public Account
{
public:
	AccSavings();
	~AccSavings();
	
	void Deposit(int val);
};

