
#include "CharConverter.hpp"
#include <cstdlib>

CharConverter::CharConverter(void) {
}

CharConverter::~CharConverter(void) {
}

void CharConverter::convertType(const std::string& value) {
	std::string	impossibles[] = {
		"nan", "nanf", 
		"inf", "+inf", "-inf", 
		"inff", "+inff", "-inff"
	};

	char* 	endptr = NULL;
	double	res = 0;
	
	if (value.length() == 1 && !std::isdigit(value[0])) {
		std::cout << "char: " <<  value[0] << std::endl;
		return ;
	}

	for (size_t i = 0; i < impossibles->length(); i++)
		if (value.compare(impossibles[i]) == 0)
			throw std::runtime_error("char: impossible");
	
	res = std::strtod(value.c_str(), &endptr);
	if (*endptr != '\0')
		throw std::runtime_error("char: impossible");
	if (res < 0 || res > 127)
		throw std::runtime_error("char: impossible");
	if (res < 32 || res > 126)
		throw std::runtime_error("char: non displayable");

	std::cout << "char: " << static_cast<char>(res) << std::endl;
}
