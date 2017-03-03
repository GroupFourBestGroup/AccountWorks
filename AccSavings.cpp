#include "AccSavings.h"

AccSavings::AccSavings()
{
}


AccSavings::~AccSavings()
{
}

void AccSavings::Deposit(int val) {
	if (val >= 100000)
	{
		val = val * 0.012;
	}
  else
  {
	  val = val * 0.008;
  }
  
	Balance += val;
	int pounds, pence;
	pounds = float(val) / 100;
	pence = val - pounds*100;
	std::cout << pounds <<"."<< pence << " Deposited" << std::endl;

	std::cout << "Transaction Complete" << std::endl;
}
