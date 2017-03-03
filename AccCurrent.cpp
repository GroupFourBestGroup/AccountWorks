#include "AccCurrent.h"

AccCurrent::AccCurrent()
{
}

AccCurrent::~AccCurrent()
{
}

void AccCurrent::Deposit(int val) {
	if (Balance+val >= 20000)
	{
		val = val * 0.005;
	}
  
	Balance += val;
	int pounds, pence;
	pounds = float(val) / 100;
	pence = val - pounds*100;
	std::cout << pounds <<"."<< pence << " Deposited" << std::endl;

	std::cout << "Transaction Complete" << std::endl;
}
