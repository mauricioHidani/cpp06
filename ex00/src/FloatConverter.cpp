
#include "FloatConverter.hpp"
#include <limits>
#include <cmath>
#include <cstdlib>
#include <iomanip>

FloatConverter::FloatConverter(void) {
}

FloatConverter::~FloatConverter(void) {
}

void FloatConverter::print(std::ostream& out, const float& value) {
	out << "float: ";

	if (value > std::numeric_limits<float>::max())
		out << "+";
	out << std::fixed << std::setprecision(1)
		<< value << "f"
		<< std::endl;
}

void FloatConverter::convertType(const std::string& value) {
	char*	endptr = NULL;
	double	res = 0;

	if (value.length() == 1 && !std::isdigit(value[0])) {
		print(std::cout, static_cast<float>(value[0]));
		return ;
	}

	res = std::strtod(value.c_str(), &endptr);
	if (*endptr != '\0' && std::string(endptr) != "f")
		throw std::runtime_error("float: impossible");

	print(std::cout, static_cast<float>(res));
}
