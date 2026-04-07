
#pragma once

#include <iostream>
#include <exception>
#include "IConverter.hpp"

class CharConverter: public IConverter {
private:
	char				_value;

protected:
	CharConverter(const char& value);
	CharConverter(const CharConverter& other);
	CharConverter& operator=(const CharConverter& other);

public: 
	CharConverter(void);
	virtual ~CharConverter(void);

	char getValue(void) const;

	void convertType(const std::string& value);

public:
	class ImpossibleException: public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class NonDisplayableException: public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const CharConverter& instance);
