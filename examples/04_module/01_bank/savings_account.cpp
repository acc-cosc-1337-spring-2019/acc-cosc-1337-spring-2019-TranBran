#include "savings_account.h"

void SavingsAccount::add_interest_earned()
{

	double interest_earned = get_balance() *time * interest_rate /100;

	deposit(interest_earned);
}

double SavingsAccount::get_balance()
{
	std::cout << "SavingsAccount::get_balance()";
// overiding the function get balance in savings account
	double interest_earned = get_balance() * time* interest_rate; 

	return BankAccount::get_balance() + interest_earned;


}