#include "memory_leak.h"

int main() 
{
	memeory_leak(); // we leaked memory  (little bit)

	while (true)
	{

		memeory_leak(); // Leaks lots of memory since its in a loop

	}
	return 0;
}