
#include "DoubleConverter.hpp"

DoubleConverter::DoubleConverter(void) {
}

DoubleConverter::DoubleConverter(const DoubleConverter& other) {
	//TODO: implement deep-copy
}

DoubleConverter::~DoubleConverter(void) {
}

DoubleConverter& DoubleConverter::operator=(const DoubleConverter& other) {
	if (this != &other) {
		//TODO: implement using deep-copy
	}

	return *this;
}

std::ostream& operator<<(std::ostream& out, const DoubleConverter& obj) {
	out << "TODO: implement";
	return out;
}
