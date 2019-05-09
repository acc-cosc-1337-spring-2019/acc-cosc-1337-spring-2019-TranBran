#include "recursion.h"
//
#include <iostream>

void display(int n)
{
	if (n == 0)
	{
		std::cout << "base case \n";
		return;
	}

	
	std::cout << "Hello" << "\n";
	display(n-1);
}

int factorial(int n)
{
	int f = 1;

	// base case to ensure it doesn't run forever
	if (n == 0)
	{
		std::cout << "base case \n";
		return f;

	}

	std::cout << "load stack \n";

	f = n * factorial(n - 1);

	std::cout << "Unload stack \n";
	return f;

}
// This function gives the base case of when n =0 stop the loop
// sets the value of f that will be used in the function
// when base case runs returns f value
// uses the factorial function to call itself while also iterate down n 
// to reach the base case parameter
// in this example main makes the value of n 5
// runs the factorial function 5 times until  n =0
// each time n is multiplied by the iterated number until n = 0

// ex. 5*4*3*2*1 = 120