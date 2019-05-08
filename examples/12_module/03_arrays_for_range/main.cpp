#include <iostream>;

int main()
{
	const int SIZE = 5;

	int hours[SIZE] = { 5,10,30,20,7 };

	for (auto hour : hours)
	{
		std::cout << hour << "\n";

		// prints 5,10,30,20,7
	}

	int i = 1; // modifies the data
	for (auto* hour : hours)
	{

		std::cout << hour << "\n";
		hour = i++;
		// prints 5,10,30,20,7
	}

	for (auto hour : hours)
	{
		std::cout << hour << "\n";

		// prints 1,2,3,4,5
	}

	return 0;

	// prints out the same way as 12 module 01
}