#include "gtest/gtest.h"
#include "helloWorld.h"

TEST(helloWorldTest, normalCase)
{
    //arrange
    std::string expected = "Hello World";

    //act
    std::string actual = sayHelloWorld();

    //assert
    EXPECT_EQ(actual, expected);
}