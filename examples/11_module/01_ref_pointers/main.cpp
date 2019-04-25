#include "ref_pointers.h"
#include <iostream>


int main() 
{
	int* hold_return_value;
	int num = 5;

	hold_return_value = return_pointer(num);


	/*
	int number = 10;
	int *numberptr = &number;
	ref(number,numberptr);
	// display what value? we should see 100
	std::cout << "Address of number: " << &number <<"Value is: " <<number<<"\n";

	//A pointer can store the adress of a variable
	int* numberPtr = &number;

	std::cout << "Adress of number pointer: " << &numberPtr << "Value stored at adress pointed to is :" << numberPtr
		<<"\n dereference pointer"<<*numberPtr;
	*/

	return 0;
}