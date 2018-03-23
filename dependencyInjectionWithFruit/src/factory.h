//
// Created by Miguel Angel Julian Aguilar on 22/3/18.
//

#ifndef GOOGLEFRUIT_EXAMPLE_FACTORY_H
#define GOOGLEFRUIT_EXAMPLE_FACTORY_H


#include <fruit/fruit.h>
#include "ClassWithDependency.h"
#include "ClassWithDependencyImpl.h"

fruit::Component<ClassWithDependencyImpl> getClassWithSimpleWriter();
fruit::Component<ClassWithDependency> getClassWithNiceWriter();


#endif //GOOGLEFRUIT_EXAMPLE_FACTORY_H
