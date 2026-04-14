
#pragma once 

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

Base* generate(void);
void identity(Base* p);
void identity(Base& p);
std::string isTypeA(Base* ptr);
std::string isTypeB(Base* ptr);
std::string isTypeC(Base* ptr);
std::string isTypeA(Base& ref);
std::string isTypeB(Base& ref);
std::string isTypeC(Base& ref);
