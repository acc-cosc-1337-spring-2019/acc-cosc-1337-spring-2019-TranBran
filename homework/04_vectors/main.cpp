/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/

#include "vectors.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;


int main() 
{

	int choice;

	do
	{
		cout << "Enter a  1 to get the max number from the vector, Enter a 2 for the vector of primes, or enter an 3 if you wish to exit";
		cin >> choice;

		if (choice == 1)
		{

			int choice2;

			int input1;

			vector<int> vector;

			do
			{
				cout << "Enter a number to add it to a vector: ";
				cin >> input1;

				vector.push_back (input1);

				cout << "\n\"" << input1 << " was added to the vector. Do you want to add any more?     if so press a  1 for Yes,	 or	press a 2 for No: ";
				cin >> choice2;

			} 
			
			while (choice2 != 2);

			int max_numb = get_max_from_vector(vector);

			cout << "Out of the numbers you entered: ";

			for (int i = 0; i < vector.size(); ++i)

			cout << " " << vector[i] << " ";

			cout << " The maximum value out of all the numbers you input was the number: " << max_numb << "\n";

		}
		else if (choice == 2)
		{
			int input2;

			cout << "Enter a number: ";
			cin >> input2;

			vector<int> prime_vector = vector_of_primes(input2);

			cout << "Prime Numbers: ";

			for (int i = 0; i < prime_vector.size(); ++i)

				cout << prime_vector[i] << "\n";

		}


	} 
	
	while (choice != 3);



	return 0;
}