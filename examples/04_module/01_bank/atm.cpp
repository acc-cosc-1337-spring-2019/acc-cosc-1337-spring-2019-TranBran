#include "atm.h"
#include<iostream>

using std::cout;

void ATM::display_balance()
{
	std::cout << "Balance: " << customer.get_account().get_balance();
}


void ATM::deposit(double amount)
{
	
	BankAccount& account = customer.get_account(); // Completely written out version
	account.deposit(amount);
	//customer.get_account().deposit(amount); shortcut method


}

void ATM::withdraw(double amount)
{

	customer.get_account().withdraw(amount);


}
void ATM::display_transactions() const
{
	for (auto tran : customer.get_account().get_transaction()); // auto makes it easy to iterate a vector
	{
		// does all the work behind the scenes

		std::cout << tran;

	}


}
// since we tested the  functionality of the bank account
// we dont need to test atm because atm uses bank acount logic