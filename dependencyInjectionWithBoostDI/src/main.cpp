//
// Created by Miguel Angel Julian Aguilar on 22/3/18.
//

#include <di.hpp>
#include <ClassWithDependency.h>
#include "Writer.h"
#include "NiceWriter.h"

namespace di = boost::di;

int main() {

    auto injector1 = di::make_injector(
            di::bind<IWriter>.to<Writer>()
    );
    injector1.create<ClassWithDependency>().run();

    auto injector2 = di::make_injector(
            di::bind<IWriter>.to<NiceWriter>()
    );
    injector2.create<ClassWithDependency>().run();

    return 0;
}
