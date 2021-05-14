#ifndef BASECPROJECT_SOMEIMPORTANTCLASS_H
#define BASECPROJECT_SOMEIMPORTANTCLASS_H

#include <string>

class SomeImportantClass {

    std::string toPrint;

public:

    explicit SomeImportantClass(std::string& printMe);

    void print();
};


#endif //BASECPROJECT_SOMEIMPORTANTCLASS_H
