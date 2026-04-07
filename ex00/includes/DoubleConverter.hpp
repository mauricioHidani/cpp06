
#pragma once

#include <iostream>
#include <stdexcept>
#include "IConverter.hpp"

class DoubleConverter: public IConverter {
private:
	void print(std::ostream& out, const double& value) const;

public: 
	DoubleConverter(void);
	~DoubleConverter(void);

	void convertType(const std::string& value);
};
