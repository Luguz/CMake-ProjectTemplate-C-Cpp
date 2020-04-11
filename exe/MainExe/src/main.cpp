#include <string>
#include <iostream>
#include <SomeLib/SomeLib.hpp>

void loop() {

    for (int i = 0; i <= 100; i++) {
        std::cout << i << std::endl;
    }
}

int main() {

    std::string toPrint = "Hello From a really important class!";
    auto important = SomeImportantClass(toPrint);
    important.print();

	loop();
}