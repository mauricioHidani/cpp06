
#pragma once

#include <iostream>
#include <stdexcept>
#include "IConverter.hpp"

class FloatConverter: public IConverter {
private:
	void print(std::ostream& out, const float& value);

public: 
	FloatConverter(void);
	~FloatConverter(void);

	void convertType(const std::string& value);
};
