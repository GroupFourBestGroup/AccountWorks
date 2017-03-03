#include "AccCurrent.h"

AccCurrent::AccCurrent()
{
}

AccCurrent::~AccCurrent()
{
}

void Account::Deposit(int val) {
	if (val >= 200)
  { val = val * 0.005}
  
	Balance += val;
	int pounds, pence;
	pounds = float(val) / 100;
	pence = val - pounds*100;
	cout << pounds <<"."<< pence << " Deposited" << endl;

	cout << "Transaction Complete" << endl;
}
