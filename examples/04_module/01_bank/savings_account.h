#ifndef SAVINGS_ACCOUNT.H
#define SAVINGS_ACCOUNT.H
#include "bank_account.h"

class SavingsAccount : public BankAccount 
	// We are creating a class that inherits from bank account
	// When you inherit it allows the new class to access the data & functions
	//of the original it is inheriting from. public and protected not private variables
{
public:
	SavingsAccount(int act,double bal, float i =.9): // with the default interest rate being .9
		BankAccount (act, bal), interest_rate(i) {   } 
	// This initializes the interest rate variable
	// BankAccount was inherited so it pulls the initialized paramteres from the original
	// bank account class and only requires the same parameters in savings account 
	// instead of needing to re initialize
	void add_interest_earned();

	double get_balance();

private:

	const float interest_rate; // We are setting the deault parameters
	const float time = 1.0 / 12;




};

























#endif // SAVINGS_ACCOUNT.H