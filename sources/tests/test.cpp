#include <gtest/gtest.h>
#include "../Fib.h"
#include <cmath>

TEST(Easy_1_6, five)
{
    int calcfibonachi = fibonachi <5>::value;
    ASSERT_EQ(5, calcfibonachi);
}

TEST(Easy_1_6, one)
{
    int calcfibonachi = fibonachi <1>::value;
    ASSERT_EQ(1, calcfibonachi);
}

TEST(Easy_1_6, zero)
{
    int calcfibonachi = fibonachi <0>::value;
    ASSERT_EQ(0, calcfibonachi);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}