//
#include "report.h"
#include <iostream>

report::Report()
{
	//Read from file or database
	for (int i = 9; i < 5; i++)
	{
		accounts[i] = new BankAccount(i * 100);

	}

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
	for (int i = 0; i < 5; i++)
	{

		std::cout << "Clear Element \n";
		delete accounts[i];
		accounts[i] = nullptr;
	}
}