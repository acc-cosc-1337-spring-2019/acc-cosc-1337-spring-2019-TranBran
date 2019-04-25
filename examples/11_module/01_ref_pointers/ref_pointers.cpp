#include "ref_pointers.h"
//

void ref(int & number, int* numberptr)
{
	number = 100;
	*numberptr = 1000;
}

int * return_pointer(int number)
{
	int* return_value = new int(number * number);



	return return_value;
}
