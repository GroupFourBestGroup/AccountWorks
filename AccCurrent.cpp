#include <time.h>
#include "AccCurrent.h"

AccCurrent::AccCurrent(){}

AccCurrent::AccCurrent(int Client, int val){
	time_t date = time(0);
	type = 1;
	Account::SetAccountID();
	ClientID = Client;
	Balance = val;
	InterestRate = 0;
	InterestCap = 0;
	ODLimit = 0;
	CreateDate = date;
	LastAccess = date;
}

AccCurrent::~AccCurrent()
{
}

void AccCurrent::Deposit(int val) {
	if (Balance + val >= 20000) {
		val += val * 0.005;
	}

	Balance += val;
	int pounds, pence;
	pounds = float(val) / 100;
	pence = val - pounds * 100;
	std::cout << pounds << "." << pence << " Deposited" << std::endl;
}
