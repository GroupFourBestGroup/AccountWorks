#pragma once
#include <vector>

#include "Account.h"
#include "AccCurrent.h"
#include "AccSavings.h"
#include "Client.h"

#include <time.h>

std::vector<Client*> ClientDB;
std::vector<Account*> AccountsDB;

Account *test1 = new Account(12, 0);
Account *test2 = new Account(15, 0);
Account *test3 = new Account(17, 0);
Account *test4 = new Account(19, 0);
Account *test5 = new Account(21, 0);





