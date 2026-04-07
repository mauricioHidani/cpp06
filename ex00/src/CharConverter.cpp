
#include "CharConverter.hpp"

CharConverter::CharConverter(void)
	:	_value(0) {
}

CharConverter::CharConverter(const char& value)
	:	_value(value) {
}

CharConverter::CharConverter(const CharConverter& other)
	:	_value(other.getValue()) {
}

CharConverter::~CharConverter(void) {
}

char CharConverter::getValue(void) const {
	return _value;
}

CharConverter& CharConverter::operator=(const CharConverter& other) {
	if (this != &other) {
		_value = other.getValue();
	}

	return *this;
}

void CharConverter::convertType(const std::string& value) {
	char* 			endptr = NULL;
	double			res = 0;
	
	std::string	impossibles[] = {"nan", "nanf", "+inf", "-inf", "+inff", "-inff"};
	for (size_t i = 0; i < 6; i++)
		if (value.compare(impossibles[i]) == 0)
			throw ImpossibleException();
	
	res = std::strtod(value.c_str(), &endptr);
	if (res < 0 || res > 127)
		throw ImpossibleException();
	if (res < 32 || res > 126)
		throw NonDisplayableException();
	
	_value = static_cast<char>(res);
}

const char* CharConverter::ImpossibleException::what() const throw() {
	return "char: impossible";
}

const char* CharConverter::NonDisplayableException::what() const throw() {
	return "char: non displayable";
}

std::ostream& operator<<(std::ostream& out, const CharConverter& obj) {
	out << "char: " << obj.getValue();
	return out;
}
