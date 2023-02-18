#include "TestHarness.h"
#include <vector>

//a CppUnitLite test that creates a std::vector of int. 
//Add 10 integers to the vector with the values 0-9.
TEST(equality, VectorType)
{
	const int vectorSize{ 10 };
	std::vector<int> emptyVector;

	for (int index = 0; index < vectorSize; index++) {
		emptyVector.push_back(index);
	}
	for (int index = 0; index < vectorSize; index++) {
		CHECK_EQUAL(index, emptyVector[index]);
	}
}
