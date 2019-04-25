#include "dangling_pointer.h"

//

void dangling_pointer()
{
	int* ptr = new int(100);
	int* innocent_ptr = ptr;

	delete ptr;
	// other line of code
	// use of innocent pointer later will cause problems

}
