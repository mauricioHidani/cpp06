
#pragma once 

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void);
void identity(Base* p);
void identity(Base& p);
std::string isTypeA(Base* p);
std::string isTypeB(Base* p);
std::string isTypeC(Base* p);
