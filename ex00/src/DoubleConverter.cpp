
#include "DoubleConverter.hpp"
#include <limits>
#include <cmath>
#include <cstdlib>
#include <iomanip>

DoubleConverter::DoubleConverter(void) {
}

DoubleConverter::~DoubleConverter(void) {
}

void DoubleConverter::print(std::ostream& out, const double& value) const {
	out << "double: ";

	if (value > std::numeric_limits<double>::max())
		out << "+";
	out << std::fixed << std::setprecision(1) 
		<< value 
		<< std::endl;
}

void DoubleConverter::convertType(const std::string& value) {
	char*	endptr = NULL;
	double	res = 0;

	if (value.length() == 1 && !std::isdigit(value[0])) {
		print(std::cout, static_cast<double>(value[0]));
		return ;
	}

	res = std::strtod(value.c_str(), &endptr);
	if (*endptr != '\0' && std::string(endptr) != "f")
		throw std::runtime_error("double: impossible");

	print(std::cout, static_cast<double>(res));
}
