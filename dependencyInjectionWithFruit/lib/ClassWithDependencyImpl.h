//
// Created by Miguel Angel Julian Aguilar on 22/3/18.
//

#ifndef GOOGLEFRUIT_EXAMPLE_CLASSWITHDEPENDENCYIMPL_H
#define GOOGLEFRUIT_EXAMPLE_CLASSWITHDEPENDENCYIMPL_H


#include <string>
#include <fruit/macro.h>
#include "IWriter.h"
#include "ClassWithDependency.h"

class ClassWithDependencyImpl : public ClassWithDependency {
public:
    INJECT(ClassWithDependencyImpl(IWriter* writer))
            : writer(writer) {
    }

    void run() final;

private:
    IWriter* writer;
};


#endif //GOOGLEFRUIT_EXAMPLE_CLASSWITHDEPENDENCYIMPL_H
