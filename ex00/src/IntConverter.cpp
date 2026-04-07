
#include "IntConverter.hpp"
#include <climits>
#include <cmath>
#include <cstdlib>
#include <string>

IntConverter::IntConverter(void) {
}

IntConverter::~IntConverter(void) {
}

void IntConverter::convertType(const std::string& value) {
	std::string	impossibles[] = {
		"nan", "nanf", 
		"inf", "+inf", "-inf", 
		"inff", "+inff", "-inff"
	};

	char*	endptr = NULL;
	double	res = 0;

	if (value.length() == 1 && !std::isdigit(value[0])) {
		std::cout << "int: " << static_cast<int>(value[0]) << std::endl;
		return ;
	}

	for (size_t i = 0; i < impossibles->length(); i++)
		if (value.compare(impossibles[i]) == 0)
			throw std::runtime_error("int: impossible");
	
	res = std::strtod(value.c_str(), &endptr);
	if (*endptr != '\0' && value.length() > 0)
		throw std::runtime_error("int: impossible");

	if (res < INT_MIN || res > INT_MAX || std::isnan(res))
		throw std::runtime_error("int: impossible");

	std::cout << "int: " << static_cast<int>(res) << std::endl;
}
