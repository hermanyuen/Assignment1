#include "TestHarness.h"
#include <iostream>

//read and write a double
TEST(equality, doubleTest)
{
	double inputValue{ 1.1 };
	double outputValue;
	std::stringstream str;
	str <<inputValue;
	str >> outputValue;

	CHECK_DOUBLES_EQUAL(1.1, outputValue, 0.01);
}

//read and write a float
TEST(equality, floatTest)
{
	float inputValue{ 1.15 };
	float outputValue;
	std::stringstream str;

	str << inputValue;
	str >> outputValue;

	CHECK_DOUBLES_EQUAL(1.15, outputValue, 0.01f);
}

//read and write a string
TEST(equality, stringTest)
{
	std::string inputValue{ "Hello" };
	std::string outputValue;
	std::stringstream str;

	str << inputValue;
	str >> outputValue;
	CHECK_EQUAL(inputValue, outputValue);
}

//Initialize a stringstream with the string "Hello". Attempt to stream this value into an int variable. 
TEST(fail, stringStreamTest)
{
	std::stringstream str;
	std::string hello("Hello");
	int outputValue=0;
	str >> outputValue;

	/*if (outputValue==hello) {
		CHECK_FAIL("Success! Streamed into Integer type.");
	}
	CHECK(!(str >> outputValue));*/

	//bool temp = outputValue >= 0 ? false : true;
	//std::cout << "This is a " << (outputValue)<<"\n";
	//CHECK_EQUAL(nullptr, *this);
	/*std::wcout << std::stringstream::eofbit << "\n";
	std::wcout << std::stringstream::failbit <<"\n";
	std::wcout << std::stringstream::badbit << "\n";*/
	//std::wcout << str.rdstate() << "\n";
	
	CHECK_EQUAL(3,str.rdstate());
}