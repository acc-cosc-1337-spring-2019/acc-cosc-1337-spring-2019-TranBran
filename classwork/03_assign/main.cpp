#include "loops.h"
#include <iostream>
using std::cout;
using std::cin;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
void prompt_user()
{
	int choice;
	int number;
	do
	{
		
		cout << "Pick a number";

		cin >> number;

		cout << "Continue? Y or N";
		cin >> choice;


	} while (choice == 'y' || choice == 'Y');
	{
		


	}


}

int main() 
{
	return 0;
}