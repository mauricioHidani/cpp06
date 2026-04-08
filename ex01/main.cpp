
#include <iostream>
#include "Serializer.hpp"

int main(void) {
	{
		Data* original = new Data;
		original->_id = 1;
		original->_firstname = "Arthur";
		original->_lastname = "Dent";

		uintptr_t serialized = Serializer::serialize(original);
		Data* deserialized = Serializer::deserialize(serialized);

		std::cout << "ORIGINAL" << std::endl;
		std::cout << "memory address: " << original << std::endl;
		std::cout << "id: " << original->_id << std::endl;
		std::cout << "first name: " << original->_firstname << std::endl;
		std::cout << "last name: " << original->_lastname << std::endl;
		std::cout << std::endl;

		std::cout << "SERIALIZED" << std::endl;
		std::cout << "value: " << serialized << std::endl;
		std::cout << std::endl;

		std::cout << "DESERIALIZED" << std::endl;
		std::cout << "memory address: " << deserialized << std::endl;
		std::cout << "id: " << deserialized->_id << std::endl;
		std::cout << "first name: " << deserialized->_firstname << std::endl;
		std::cout << "last name: " << deserialized->_lastname << std::endl;
		std::cout << std::endl;

		delete original;
	} std::cout << std::endl;

	return 0;
}
