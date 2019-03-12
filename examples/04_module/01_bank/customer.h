#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"bank_account.h"
class Customer
{
public:

	Customer(BankAccount act) : account(act) {}
	BankAccount& get_account();
private:

	BankAccount& account; // By making it a reference. when it is  refered to later when the variable is called.


};





#endif // CUSTOMER_H