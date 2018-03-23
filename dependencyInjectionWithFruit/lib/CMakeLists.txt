
set(SOURCE_FILES IWriter.h ClassWithDependency.h ClassWithDependencyImpl.h ClassWithDependencyImpl.cpp)

add_library(libraryWithDependencies ${SOURCE_FILES})
target_link_libraries(libraryWithDependencies fruit)