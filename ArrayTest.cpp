#include "TestHarness.h"


//a CppUnitLite test that uses `new` to allocate an (built-in, C-style) array of 10 integers.
//Initialize the array with the values 0 to 9.
TEST(equality, intArray)
{
	int *arr = new int[10];
	for (int index = 0; index < sizeof(arr); index++) {
		arr[index] = index;
	}
	for (int index = 0; index < sizeof(arr); index++) {
		CHECK_EQUAL(index, arr[index]);
	}
	delete[] arr;
}
