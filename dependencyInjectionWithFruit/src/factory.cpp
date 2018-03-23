//
// Created by Miguel Angel Julian Aguilar on 22/3/18.
//

#include <fruit/fruit.h>
#include "factory.h"
#include "Writer.h"
#include "NiceWriter.h"
#include "ClassWithDependencyImpl.h"

fruit::Component<ClassWithDependencyImpl> getClassWithSimpleWriter() {
    return fruit::createComponent()
            .bind<IWriter, Writer>();
            //.bind<ClassWithDependency, ClassWithDependencyImpl>();
}

fruit::Component<ClassWithDependency> getClassWithNiceWriter() {
    return fruit::createComponent()
            .bind<IWriter, NiceWriter>()
            .bind<ClassWithDependency, ClassWithDependencyImpl>();
}
