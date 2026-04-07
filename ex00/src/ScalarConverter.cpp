
#include "ScalarConverter.hpp"
#include "IConverter.hpp"
#include "CharConverter.hpp"
#include "IntConverter.hpp"
#include "FloatConverter.hpp"
#include "DoubleConverter.hpp"

ScalarConverter::ScalarConverter(void) {
}

ScalarConverter::~ScalarConverter(void) {
}

void ScalarConverter::convert(const std::string& value) {
	IConverter*	type[] = {
		new CharConverter(),
		new IntConverter(),
		new FloatConverter(),
		new DoubleConverter()
	};

	for (size_t i = 0; i < 4; i++) {
		try {
			type[i]->convertType(value);
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		delete type[i];
	}
}
