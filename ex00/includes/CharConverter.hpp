
#pragma once

#include <iostream>
#include "IConverter.hpp"

class CharConverter: public IConverter {
public: 
	CharConverter(void);
	virtual ~CharConverter(void);

	void convertType(const std::string& value);
};
