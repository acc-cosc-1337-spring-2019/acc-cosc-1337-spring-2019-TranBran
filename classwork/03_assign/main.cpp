#include <iostream>
#include "loops.h"

using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char c;
	int num;

	do 
	{
		cout << "Enter number: ";
		cin >> num;
		cout << "Factorial: " << factorial(num) <<"\n";

		cout << "Continue y: ";
		cin >> c;
	
	} while (c == 'y' || c == 'Y');

	return 0;
}