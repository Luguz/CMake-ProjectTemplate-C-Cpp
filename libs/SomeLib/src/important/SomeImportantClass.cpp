#include "SomeImportantClass.hpp"

#include <iostream>

SomeImportantClass::SomeImportantClass(std::string &printMe) : m_toPrint(printMe) {}

void SomeImportantClass::print() {
    std::cout << m_toPrint << std::endl;
}


