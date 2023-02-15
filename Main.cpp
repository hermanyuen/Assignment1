#include "TestHarness.h"
#include <iostream>
#include <format>

int main()
{
	int intValue;
	double doubleValue;
	std::string stringValue;

	const int size{ 3 };

	std::cout << "Enter three values with type int, double, and string" << std::endl;
	std::cin >> intValue >> doubleValue >> stringValue;
	std::cout << std::format("Integer value is {}\n Double value is {:.2f}\n String value is {}\n",
	intValue, doubleValue, stringValue);
	TestResult tr;
	TestRegistry::runAllTests(tr);
/**
  // random number generator used in some tests
  srand(::time_t(NULL));

  TestResult tr;
  TestRegistry::runAllTests(tr);
  */
  return 0;
}
