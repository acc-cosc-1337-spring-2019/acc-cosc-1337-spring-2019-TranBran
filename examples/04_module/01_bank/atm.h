#include "customer.h"

// While coding with more than one class
#ifndef ATM_H
#define ATM_H

class ATM 
{
public:
	ATM(Customer c) : customer(c) {}
	void display_balance();

private:
	Customer customer;
};

#endif // !ATM_H