#include "TestHarness.h"

//a CppUnitLite test that uses the array form of unique_ptr to 
//allocate an (built-in, C-style) array of 10 integers.
TEST(equality, UniqueArray)
{
	//std::unique_ptr<int[]> intValues = std::make_unique<int[]>(10);
	auto intValues = std::make_unique<int[]>(10);
	for (int index = 0; index < sizeof(intValues); index++) {
		intValues[index] = index;
	}
	for (int index = 0; index < sizeof(intValues); index++) {
		CHECK_EQUAL(index, intValues[index]);
	}
}
