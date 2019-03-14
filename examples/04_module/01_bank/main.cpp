#include "atm.h"
#include "savings_account.h"
#include"checking_account.h"
#include <iostream>
#include<vector>

int main()
{
	SavingsAccount s(12345, 1000);
	std::cout << s.get_balance();
	
	BankAccount& b = s; // makes a reference to savings account s and allows us to use savings accounts get balance function
	std::cout << b.get_balance()<<"\n";

	CheckingAccount c(54321, 500);
	BankAccount& b = c;
	std::cout << b.get_balance() << "\n";

	std::vector<std::reference_wrapper<BankAccount>>accounts{ s,c }; // referenc ewraps the vector
	
	for (auto & account : accounts) 

	{ //account must be unwrapped with .get() to get the instance of Account

		std::cout << account.get().get_balance() << std::endl;

	}



}

	//int num = 5;
	//num_ref = num;
	//std::cout << num_ref;

	BankAccount account(123456, 500);
	Customer customer(account);
	ATM atm(customer);

	
	atm.display_balance();
	atm.deposit(50);
	display(account);

	BankAccount b(1, 900);
	BankAccount c = account + b;
	//BankAccount d = account;
	//std::cout<<c;
	//std::cin<<c;
	std::cout << "\n";
	display(c);
	std::cout << c<<"\n";


	/*std::vector<BankAccount>accounts;
	BankAccount account(12345689, 500);  //object1
	BankAccount account1(55545689, 5000); //object2

	accounts.push_back(account);
	accounts.push_back(account1);

	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";
	}*/




	/*

	for(auto tic_tac_toe: list)
	{
	
	cout<<tic_tac_toe<<"\n";
	
	}
	*/


	return 0;
}