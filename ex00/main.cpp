
#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "The number of arguments provided is invalid" << std::endl;
		return 0;
	}

	ScalarConverter::convert(argv[1]);
	return 0;
}
