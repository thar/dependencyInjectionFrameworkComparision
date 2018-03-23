
set(SOURCE_FILES main.cpp Writer.cpp Writer.h NiceWriter.cpp NiceWriter.h factory.cpp factory.h)

include_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(fruit_test ${SOURCE_FILES})
target_link_libraries(fruit_test libraryWithDependencies)