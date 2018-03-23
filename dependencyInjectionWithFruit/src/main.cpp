//
// Created by Miguel Angel Julian Aguilar on 22/3/18.
//

#include "factory.h"


int main() {
    fruit::Injector<ClassWithDependencyImpl> simpleInjector(getClassWithSimpleWriter);
    ClassWithDependency* simpleTest = simpleInjector.get<ClassWithDependencyImpl*>();
    simpleTest->run();
    fruit::Injector<ClassWithDependency> niceInjector(getClassWithNiceWriter);
    ClassWithDependency* niceTest = niceInjector.get<ClassWithDependency*>();
    niceTest->run();
    return 0;
}
