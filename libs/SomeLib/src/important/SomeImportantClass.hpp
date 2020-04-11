#ifndef BASECPROJECT_SOMEIMPORTANTCLASS_H
#define BASECPROJECT_SOMEIMPORTANTCLASS_H

#include <string>

class SomeImportantClass {

    std::string m_toPrint;

public:

    explicit SomeImportantClass(std::string& printMe);
    ~SomeImportantClass() = default;

    void print();

};


#endif //BASECPROJECT_SOMEIMPORTANTCLASS_H
