
set(SOURCE_FILES main.cpp Writer.cpp Writer.h NiceWriter.cpp NiceWriter.h)

include_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(boost_di_test ${SOURCE_FILES})
target_link_libraries(boost_di_test libraryWithDependencies)