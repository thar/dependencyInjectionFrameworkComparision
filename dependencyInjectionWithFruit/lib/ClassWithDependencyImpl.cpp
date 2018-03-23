//
// Created by Miguel Angel Julian Aguilar on 23/3/18.
//

#include "ClassWithDependencyImpl.h"

void ClassWithDependencyImpl::run() {
    std::string s{"This is my test"};
    writer->writer(s);
}
