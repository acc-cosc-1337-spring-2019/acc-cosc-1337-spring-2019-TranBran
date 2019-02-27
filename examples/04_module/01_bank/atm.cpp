#include "atm.h"
#include <iostream>

void ATM::display_balance()
{
	cout << "Balance: " << account.get_balance();


}