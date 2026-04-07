
#pragma once

#include <iostream>
#include "IConverter.hpp"

class IntConverter: public IConverter {
public: 
	IntConverter(void);
	~IntConverter(void);

	void convertType(const std::string& value);
};
