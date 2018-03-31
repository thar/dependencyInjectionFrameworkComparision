//
// Created by Miguel Angel Julian Aguilar on 22/3/18.
//

#ifndef GOOGLEFRUIT_EXAMPLE_IWRITER_H
#define GOOGLEFRUIT_EXAMPLE_IWRITER_H


#include <string>

class IWriter {
public:
    virtual void writer(std::string s) = 0;
};


#endif //GOOGLEFRUIT_EXAMPLE_IWRITER_H
