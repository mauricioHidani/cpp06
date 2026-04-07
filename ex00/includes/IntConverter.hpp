
#pragma once

#include <iostream>
#include <exception>
#include "IConverter.hpp"

class IntConverter: public IConverter {
private: 
	int	_value;

protected: 
	IntConverter(const int& value);
	IntConverter(const IntConverter& other);
	IntConverter& operator=(const IntConverter& other);

public: 
	IntConverter(void);
	~IntConverter(void);

	int getValue(void) const;

	void convertType(const std::string& value);

public:
	class ImpossibleException: public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const IntConverter& obj);
