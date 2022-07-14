#include "gtest/gtest.h"
extern "C"
{
#include "module1.h"
}

TEST(testModule1, returnValGood)
{
    EXPECT_EQ(8, func(8));	
}
