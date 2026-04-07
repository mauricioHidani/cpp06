
#pragma once

#include <iostream>

class FloatConverter {
private: 
	//TODO: implement

protected: 
	//TODO: implement

public: 
	FloatConverter(void);
	FloatConverter(const FloatConverter& other);
	~FloatConverter(void);

	FloatConverter& operator=(const FloatConverter& other);
};

std::ostream& operator<<(std::ostream& out, const FloatConverter& obj);
