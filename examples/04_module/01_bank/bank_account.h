#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include "Transaction.h"
#include <iostream>
#include <vector>
class BankAccount
{
public:
	//BankAccount(); // Default Constructor
	BankAccount(int act, double bal);
	virtual double get_balance() const;
	void deposit(double amount);
	void deposit(int pin, double ammount);
	void withdraw(double amount);
	friend void display(const BankAccount& act);
	friend BankAccount operator +(BankAccount& act1, const BankAccount& act2);
	friend std::ostream & operator << (std::ostream & out, 
		                                 const BankAccount & b);

	std::vector<Transaction> get_transaction() const;

	//friend std::istream & operator << (std::istream & in,
	//	const BankAccount & b);


private:

	std::vector < Transaction > transactions;
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);
};

# endif // !BANK_ACCOUNT_H