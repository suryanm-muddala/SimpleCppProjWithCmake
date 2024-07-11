#include "gtest/gtest.h"
#include "explicitKeyWord.h"

TEST(explicitKeyWordTest, normalCase)
{
    //arrange
    //act
    //assert

    MyNormalClass normalObj = {10};

    MyClassVariant v1{normalObj};
    foo(v1);

    int expected = 10;
    int actual = normalObj.getMemberValue();

    EXPECT_EQ(actual, expected);
}



TEST(explicitKeyWordTest, explicitCase)
{
    //arrange
    //act
    //assert

    MyExplicitClass explicitOj{200};

    MyClassVariant v2{explicitOj};
    foo(v2);


    int expected = 200;
    int actual = explicitOj.getMemberValue();

    EXPECT_EQ(actual, expected);
}
