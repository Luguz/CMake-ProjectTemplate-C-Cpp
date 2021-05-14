#include "alib/important/SomeImportantClass.hpp"

#include <iostream>

SomeImportantClass::SomeImportantClass(std::string &printMe) : toPrint(printMe) {}

void SomeImportantClass::print() {
    std::cout << toPrint << std::endl;
}


