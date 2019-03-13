#ifndef TRANSACTION_H
#define TRANSCACTION_H
#include <string>
#include <iostream>


   // a struct is a class that has everything public by default

class Transaction
{
public:

	Transaction(std::string& t, double amt, double bal) :
		type(t), amount(amt), balance(bal) {}

	friend std::ostream & operator << (std::ostream & out,
		const Transaction & t);

private:

	std::string type; // Refers to the type of transaction " Deposit withdraw etc."
	double amount; // displays the amount of the transaction
	double balance;




};















#endif
