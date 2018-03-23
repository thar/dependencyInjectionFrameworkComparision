//
// Created by Miguel Angel Julian Aguilar on 23/3/18.
//

#include <IWriter.h>
#include <gtest/gtest.h>
#include <ClassWithDependencyImpl.h>
#include <fruit/fruit.h>
#include "gmock/gmock.h"

class MockIWriter : public IWriter
{
public:
    INJECT(MockIWriter()) = default;
    MOCK_METHOD1(writer, void(std::string s));
};

fruit::Component<ClassWithDependencyImpl> getClassWithMockWriter(MockIWriter* mock) {
    return fruit::createComponent().bindInstance(static_cast<IWriter&>(*mock));
}

// Mocked test
TEST(FruitDependencyInjectionMock, DependencyInjectionMockTest)
{
    MockIWriter writerMock;
    EXPECT_CALL(writerMock, writer("This is my test"));
    fruit::Injector<ClassWithDependencyImpl> simpleInjector(getClassWithMockWriter, &writerMock);
    ClassWithDependency* mockTest = simpleInjector.get<ClassWithDependencyImpl*>();
    mockTest->run();
}