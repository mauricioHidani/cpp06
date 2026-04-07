
#include <iostream>

class ScalarConverter {
private:
	ScalarConverter(void);

public: 
	virtual ~ScalarConverter(void);
	static void convert(const std::string& value);
};
