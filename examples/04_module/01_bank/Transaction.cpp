#include "Transaction.h"

std::ostream & operator<<(std::ostream & out, const Transaction & t)
{
	
	out << "Type    " << "Amount    " << "Balance    ";
	out << t.type << " " << t.amount << " " << t.balance;// TODO: insert return statement here

	return out;
}
