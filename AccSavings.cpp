#include "AccSavings.h"

AccSavings::AccSavings()
{
}


AccSavings::~AccSavings()
{
}

void AccSavings::Deposit(int val) {
	
  
	Balance += val;
	int pounds, pence;
	pounds = float(val) / 100;
	pence = val - pounds*100;
	std::cout << pounds <<"."<< pence << " Deposited" << std::endl;

	std::cout << "Transaction Complete" << std::endl;
}
