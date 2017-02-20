#pragma once
#include <string>
#include <iostream>

using std::cout;
using std::endl;

class Account
{
// Data section
public:

private:
	std::string type;
	int balance;
	int interest;
	struct StatementItem;

public:
	Account();
	virtual ~Account();

	virtual void Deposit();
	virtual void Withdraw();
	virtual void Transfer();
	virtual void Update();

	virtual void ViewBalances();

	// For Current Account types only
	virtual void ViewStatement();
	virtual void Payment();
private:

};

