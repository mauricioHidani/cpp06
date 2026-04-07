
#include "FloatConverter.hpp"

FloatConverter::FloatConverter(void) {
}

FloatConverter::FloatConverter(const FloatConverter& other) {
	//TODO: implement deep-copy
}

FloatConverter::~FloatConverter(void) {
}

FloatConverter& FloatConverter::operator=(const FloatConverter& other) {
	if (this != &other) {
		//TODO: implement using deep-copy
	}

	return *this;
}

std::ostream& operator<<(std::ostream& out, const FloatConverter& obj) {
	out << "TODO: implement";
	return out;
}
