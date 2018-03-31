//
// Created by Miguel Angel Julian Aguilar on 22/3/18.
//

#ifndef GOOGLEFRUIT_EXAMPLE_CLASSWITHDEPENDENCY_H
#define GOOGLEFRUIT_EXAMPLE_CLASSWITHDEPENDENCY_H


#include <string>
#include "IWriter.h"
#include "ClassWithDependency.h"

class ClassWithDependency {
public:
    ClassWithDependency(IWriter* writer)
            : writer(writer) {
    }

    void run();

private:
    IWriter* writer;
};


#endif //GOOGLEFRUIT_EXAMPLE_CLASSWITHDEPENDENCY_H
