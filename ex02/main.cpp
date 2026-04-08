
#include <iostream>
#include "Base.hpp"
#include "Utils.hpp"

int main(void) {

	{
		Base* a = new A();
		Base* random = generate();

		std::cout << "A COMMON TYPE> ";
		identity(a);

		std::cout << "A RANDOM TYPE> ";
		identity(*random);

		delete a;
		delete random;

	} std::cout << std::endl;

	return 0;
}
