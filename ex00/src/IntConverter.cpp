
#include "IntConverter.hpp"

IntConverter::IntConverter(void)
	:	_value(0) {
}

IntConverter::IntConverter(const IntConverter& other)
	:	_value(other.getValue()) {
}

IntConverter::~IntConverter(void) {
}

int IntConverter::getValue(void) const {
	return _value;
}

void IntConverter::convertType(const std::string& value) {

}

IntConverter& IntConverter::operator=(const IntConverter& other) {
	if (this != &other) {
		_value = other.getValue();
	}

	return *this;
}

std::ostream& operator<<(std::ostream& out, const IntConverter& instance) {
	out << "int: " << instance.getValue();
	return out;
}

const char* IntConverter::ImpossibleException::what() const throw() {
	return "int: impossible";
}
