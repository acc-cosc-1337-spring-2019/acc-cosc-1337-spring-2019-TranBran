//
#include "arr_functions.h"
#include <iostream>

void iterate_aray(int* ints, int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << *ints << "\n";
		ints++;

	}


}