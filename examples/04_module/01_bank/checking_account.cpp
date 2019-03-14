#include "checking_account.h"
#include<iostream>
using std::cout;


double CheckingAccount::get_balance()
{
	std::cout << "CheckingAccount::get_balance()";
	return BankAccount::get_balance();

}