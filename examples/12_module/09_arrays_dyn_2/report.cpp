//
#include "report.h"
#include <iostream>

report::Report()
{
	//Read from file or database
	account = new BankAccount[5];

	//iterate to update balance
	account[0].get_balance();


}

void Report::display()
{
	for (int i = 0; i < 5; i++)
	{

		std::cout << accounts[i].get_balance() << "\n";
	}


}

Report::~Report()
{
	std::cout << "Clear Array \n";
	delete[] accounts;
	aaccounts = nullptr;
}