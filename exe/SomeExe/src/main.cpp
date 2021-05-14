#include <string>
#include <iostream>

#include "alib/alib.hpp"

int main() {

    std::string toPrint = "Hello from a really important class!";
    SomeImportantClass important(toPrint);
    important.print();
}