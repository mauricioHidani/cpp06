
#pragma once

#include <iostream>
#include <exception>

class IConverter {
public: 
	virtual ~IConverter(void) {}
	virtual void convertType(const std::string& value) = 0;
};
