#include "Transaction.h"

std::ostream & operator<<(std::ostream & out, const Transaction & t)
{
	
	//out << "Type    " << "Amount    " << "Balance    ";
	out << t.type << " " << t.amount << " " << t.balance<<"\n";// TODO: insert return statement here

	//Overload the ostream operator
	return out;
}
