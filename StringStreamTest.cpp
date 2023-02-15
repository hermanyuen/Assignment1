#include "TestHarness.h"
#include <iostream>

//read and write a double
TEST(equality, doubleTest)
{
	double inputValue;
	double outputValue;
	std::stringstream str;

	std::cout << "Enter in a double:" << std::endl;
	std::cin >> inputValue;
	str << inputValue;
	str >> outputValue;
	std::cout << "Double value is " << outputValue << std::endl;

	CHECK_DOUBLES_EQUAL(inputValue, outputValue, 0.01);
}

//read and write a float
TEST(equality, floatTest)
{
	float inputValue;
	float outputValue;
	std::stringstream str;

	std::cout << "Enter in a float:" << std::endl;
	std::cin >> inputValue;
	str << inputValue;
	str >> outputValue;
	std::cout << "Double value is " << outputValue << std::endl;

	CHECK_DOUBLES_EQUAL(inputValue, outputValue, 0.01f);
}

//read and write a string
TEST(equality, stringTest)
{
	std::string inputValue;
	std::string outputValue;
	std::stringstream str;

	std::cout << "Enter in a string:" << std::endl;
	std::cin >> inputValue;
	str << inputValue;
	str >> outputValue;
	std::cout << "Double value is " << outputValue << std::endl;

	CHECK_EQUAL(inputValue, outputValue);
}

//Initialize a stringstream with the string "Hello". Attempt to stream this value into an int variable. 
TEST(fail, stringStreamTest)
{
	std::stringstream str;
	std::string hello("hello");
	int outputValue;

	if (str >> outputValue) {
		CHECK_FAIL("Success! Streamed into Integer type.");
	}
	CHECK(!(str >> outputValue));
}