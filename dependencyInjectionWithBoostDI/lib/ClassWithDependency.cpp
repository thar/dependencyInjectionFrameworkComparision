#include "ClassWithDependency.h"

void ClassWithDependency::run() {
    std::string s{"This is my test"};
    writer->writer(s);
}
