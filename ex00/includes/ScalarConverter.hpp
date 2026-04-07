
#include <iostream>

class ScalarConverter {
private:
	ScalarConverter(void);

public: 
	virtual ~ScalarConverter(void);

	ScalarConverter& operator=(const ScalarConverter& other);

	static void convert(const std::string& value);
};
