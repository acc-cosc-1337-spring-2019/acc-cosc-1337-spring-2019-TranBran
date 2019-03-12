#include "atm.h"
#include<iostream>


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
// since we tested the  functionality of the bank account
// we dont need to test atm because atm uses bank acount logic