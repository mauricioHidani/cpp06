
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

void identity(Base* ptr) {
	std::string (*isType[])(Base*) = { isTypeA, isTypeB, isTypeC };
	std::string type;

	for (size_t i = 0; i < 3; i++) {
		type = isType[i](ptr);
		if (!type.empty()) {
			std::cout << "identified: " << type << std::endl;
			break ;
		}
	}
}

void identity(Base& ptr) {
	std::string (*isType[])(Base&) = { isTypeA, isTypeB, isTypeC };
	std::string type;

	for (size_t i = 0; i < 3; i++) {
		type = isType[i](ptr);
		if (!type.empty()) {
			std::cout << "identified: " << type << std::endl;
			break ;
		}
	}
}

std::string isTypeA(Base* ptr) {
	if (dynamic_cast<A*>(ptr) != NULL)
		return "A";
	return std::string("");
}

std::string isTypeB(Base* ptr) {
	if (dynamic_cast<B*>(ptr) != NULL)
		return "B";
	return std::string("");
}

std::string isTypeC(Base* ptr) {
	if (dynamic_cast<C*>(ptr) != NULL)
		return "C";
	return std::string("");
}

std::string isTypeA(Base& ref) {
	try {
		dynamic_cast<A&>(ref);
		return "A";
	} catch (const std::bad_cast& e) {
		return std::string("");
	}
}

std::string isTypeB(Base& ref) {
	try {
		dynamic_cast<B&>(ref);
		return "B";
	} catch (const std::bad_cast& e) {
		return std::string("");
	}
}

std::string isTypeC(Base& ref) {
	try {
		dynamic_cast<C&>(ref);
		return "C";
	} catch (const std::bad_cast& e) {
		return std::string("");
	}
}
