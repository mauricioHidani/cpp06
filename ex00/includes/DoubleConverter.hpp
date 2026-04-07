
#pragma once

#include <iostream>

class DoubleConverter {
private: 
	//TODO: implement

protected: 
	//TODO: implement

public: 
	DoubleConverter(void);
	DoubleConverter(const DoubleConverter& other);
	~DoubleConverter(void);

	DoubleConverter& operator=(const DoubleConverter& other);
};

std::ostream& operator<<(std::ostream& out, const DoubleConverter& obj);
