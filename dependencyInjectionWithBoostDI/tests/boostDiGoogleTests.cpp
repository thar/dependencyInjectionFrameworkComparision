//
// Created by Miguel Angel Julian Aguilar on 23/3/18.
//

#include <IWriter.h>
#include <gtest/gtest.h>
#include <ClassWithDependency.h>
#include <di.hpp>
#include "gmock/gmock.h"

namespace di = boost::di;

class MockIWriter : public IWriter
{
public:
    MOCK_METHOD1(writer, void(std::string s));
};

// Mocked test
TEST(FruitDependencyInjectionMock, DependencyInjectionMockTest)
{
    MockIWriter writerMock;
    EXPECT_CALL(writerMock, writer("This is my test"));
    auto injector = di::make_injector(
            di::bind<IWriter>.to(&writerMock)
    );
    injector.create<ClassWithDependency>().run();
}