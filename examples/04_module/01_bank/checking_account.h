#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public BankAccount
{
public:
	CheckingAccount(int act, double bal);

	BankAccount(int act,double bal) {} //Initialize the BankAccount

	double get_balance();





private:







};











#endif // !CHECKING_ACCOUNT_H