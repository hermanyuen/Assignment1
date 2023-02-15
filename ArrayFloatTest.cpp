#include "TestHarness.h"
#include <array>
#include <iostream>
#include <format>

// To add your own unit tests
// 
// 1) Rename this file using a name that describes the software entity under test. E.g., if you were testing std::vector
//    rename this file as VectorTest.cpp
// 2) Add additional test files as needed. E.g., if you were testing a class named Animal and another class named Zoo you
//    would have two test files. AnimalTest.cpp and ZooTest.cpp
// 3) Remove the sample tests from this file


TEST(equality, FloatArray)
{
	const int size {10};
	std::array<float, size> arr{1.0000f, 1.5000f,2.3333f,3.2500f,4.2000f,5.1667f,6.1429f,7.1250f,8.1111f,9.1000};
	for (int index{}; index < size; index++)
	{
		/*arr[index] = index+1/(float)(index+1);
		std::cout << std::format("arr {:0.4f}",arr[index]) << std::endl;*/
		CHECK_DOUBLES_EQUAL(index + 1 / (float)(index + 1), arr[index],0.4f);
	}

}
