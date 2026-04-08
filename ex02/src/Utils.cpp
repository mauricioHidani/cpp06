
#include "Utils.hpp"

Base* generate(void) {
	std::srand(static_cast<unsigned int>(std::time(0)));
	int numRand = (std::rand() % 3) + 1;

	switch(numRand) {
		case 1: return new A();
		case 2: return new B();
		case 3: return new C();
		default: return NULL;
	}
}

void identity(Base* p) {
	std::string (*isType[])(Base*) = { isTypeA, isTypeB, isTypeC };
	std::string type;

	for (size_t i = 0; i < 3; i++) {
		type = isType[i](p);
		if (!type.empty()) {
			std::cout << "identified: " << type << std::endl;
			break ;
		}
	}
}

void identity(Base& p) {
	std::string (*isType[])(Base*) = { isTypeA, isTypeB, isTypeC };
	std::string type;

	for (size_t i = 0; i < 3; i++) {
		type = isType[i](&p);
		if (!type.empty()) {
			std::cout << "identified: " << type << std::endl;
			break ;
		}
	}
}

std::string isTypeA(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		return "A";
	return std::string("");
}

std::string isTypeB(Base* p) {
	if (dynamic_cast<B*>(p) != NULL)
		return "B";
	return std::string("");
}

std::string isTypeC(Base* p) {
	if (dynamic_cast<C*>(p) != NULL)
		return "C";
	return std::string("");
}
