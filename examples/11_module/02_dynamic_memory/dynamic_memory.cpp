#include "dynamic_memory.h"
#include<iostream>
//

void allocate_use_release()
{
	int stack_num{ 5 }; // stack variable
	int* num = new int(5);//heap, data variable.. Allocate

	std::cout << *num;//use

	delete num;//Release
	num = nullptr;
}
