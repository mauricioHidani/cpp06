
#include "ScalarConverter.hpp"
#include "IConverter.hpp"
#include "CharConverter.hpp"

ScalarConverter::ScalarConverter(void) {
}

ScalarConverter::~ScalarConverter(void) {
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	return *this;
}

void ScalarConverter::convert(const std::string& value) {
	IConverter*	type[] = {
		new CharConverter()
	};

	for (size_t i = 0; i < 4; i++) {
		try {
			type[i]->convertType(value);
			std::cout << type[i];
			delete type[i];
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}
