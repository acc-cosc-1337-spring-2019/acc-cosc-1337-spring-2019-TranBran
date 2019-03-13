#include "savings_account.h"

void Savings_Account::add_interest_earned()
{

	double interest_earned = get_balance() *time * interest_rate /100;

	deposit(interest_earned);
}