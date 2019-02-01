#include"if.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	//create a bool variable named even
	//create an int variable named value
	bool even;
	int value;
	//prompt user for a keyboard number
	//assign the number to the value variable
	cout << "Enter a number";
	cin >> value;

	//call the is_even function with value as its argument
	even = is_even(value);

	//and assign its return value to the even variable
	if (even == true)
	{

		cout << value << "Is Even";

	}
	else
	{
		cout << value << "Is Odd";

	}
	//display whether the number is even or not

	return 0;
}
