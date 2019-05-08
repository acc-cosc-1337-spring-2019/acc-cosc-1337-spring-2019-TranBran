#include <iostream>

int main() 
{
	const int SIZE = 5;

	int hours[SIZE] = { 5,10,30,20,7 };

	int* first_element = hours; // points to the first value in the array

	std::cout *first_element << "\n"; // prints out a 5
	std::cout *first_element + 1 << "\n"; // prints out a 10
	std::cout *first_element << "\n";

	*first_element++; // this will iterate the first element once printing a 10
	std::cout *first_element << "\n\n";

	//forward iteration
	int* hours_ptr = hours;
	for (int i = 0; i < SIZE; ++i) // loop that loops until i is <SIZE
	{
		std::cout << *hours_ptr << "\n";
		hours_ptr++;

		// prints out the array moving forward
	}

	std::cout << "\n\n";
	// Reverse Iteration
	for (int i = 0; i < SIZE; ++i) // loop that loops until i is <SIZE
	{
		hours_ptr--;
		std::cout << *hours_ptr << "\n";

		// prints out the array moving in reverse
	}

	
	return 0;
}