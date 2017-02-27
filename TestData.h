#pragma once
#include <vector>

#include "Account.h"
#include "AccCurrent.h"
#include "AccSavings.h"
#include "Client.h"

#include <time.h>

std::vector<Account*> AccountsTest;

inline void LoadData() {
	Account *test;
	AccountsTest.push_back(test);
	Account *newAccount;
	AccountsTest.push_back(newAccount);
}

