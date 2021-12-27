/**
 * @file tests_sqrt.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief Unit tests for the sqrt function.
 * @date 2021-12-26
 * 
 * @copyright Copyright Alyce (c) 2021
 */

#include "sqrt.h"
#include <gtest/gtest.h>

TEST(MySqrt, Basic)
{
    EXPECT_EQ(MySqrt(0), 0);
    EXPECT_EQ(MySqrt(1), 1);
    EXPECT_EQ(MySqrt(2), 1);
    EXPECT_EQ(MySqrt(3), 1);
    EXPECT_EQ(MySqrt(4), 2);
    EXPECT_EQ(MySqrt(5), 2);
    EXPECT_EQ(MySqrt(6), 2);
    EXPECT_EQ(MySqrt(7), 2);
    EXPECT_EQ(MySqrt(8), 2);
    EXPECT_EQ(MySqrt(9), 3);
    EXPECT_EQ(MySqrt(10), 3);
    EXPECT_EQ(MySqrt(11), 3);
    EXPECT_EQ(MySqrt(12), 3);
    EXPECT_EQ(MySqrt(13), 3);
    EXPECT_EQ(MySqrt(14), 3);
    EXPECT_EQ(MySqrt(15), 3);
    EXPECT_EQ(MySqrt(16), 4);
    EXPECT_EQ(MySqrt(17), 4);
    EXPECT_EQ(MySqrt(18), 4);
    EXPECT_EQ(MySqrt(19), 4);
    EXPECT_EQ(MySqrt(20), 4);
    EXPECT_EQ(MySqrt(21), 4);
    EXPECT_EQ(MySqrt(22), 4);
    EXPECT_EQ(MySqrt(23), 4);
    EXPECT_EQ(MySqrt(24), 4);
    EXPECT_EQ(MySqrt(25), 5);
    EXPECT_EQ(MySqrt(26), 5);
    EXPECT_EQ(MySqrt(27), 5);
    EXPECT_EQ(MySqrt(28), 5);
}

TEST(MySqrt, BigNumbers)
{
    EXPECT_EQ(MySqrt(1000), 31);
    EXPECT_EQ(MySqrt(10000), 100);
    EXPECT_EQ(MySqrt(5444641), 2333);
    EXPECT_EQ(MySqrt(466581234), 21600);
}

TEST(MySqrt, PrimeNumbers)
{
    EXPECT_EQ(MySqrt(2), 1);
    EXPECT_EQ(MySqrt(3), 1);
    EXPECT_EQ(MySqrt(5), 2);
    EXPECT_EQ(MySqrt(7), 2);
    EXPECT_EQ(MySqrt(11), 3);
    EXPECT_EQ(MySqrt(13), 3);
    EXPECT_EQ(MySqrt(17), 4);
    EXPECT_EQ(MySqrt(19), 4);
    EXPECT_EQ(MySqrt(23), 4);
    EXPECT_EQ(MySqrt(29), 5);
    EXPECT_EQ(MySqrt(31), 5);
    EXPECT_EQ(MySqrt(37), 6);
    EXPECT_EQ(MySqrt(41), 6);
    EXPECT_EQ(MySqrt(43), 6);
    EXPECT_EQ(MySqrt(47), 6);
    EXPECT_EQ(MySqrt(53), 7);
    EXPECT_EQ(MySqrt(59), 7);
    EXPECT_EQ(MySqrt(61), 7);
    EXPECT_EQ(MySqrt(67), 8);
    EXPECT_EQ(MySqrt(71), 8);
    EXPECT_EQ(MySqrt(73), 8);
    EXPECT_EQ(MySqrt(79), 8);
    EXPECT_EQ(MySqrt(83), 9);
    EXPECT_EQ(MySqrt(89), 9);
    EXPECT_EQ(MySqrt(97), 9);
    EXPECT_EQ(MySqrt(101), 10);
    EXPECT_EQ(MySqrt(103), 10);
    EXPECT_EQ(MySqrt(107), 10);
    EXPECT_EQ(MySqrt(109), 10);
}

TEST(MySqrt, Limits)
{
    EXPECT_EQ(MySqrt(INT_MAX), 46340);
}

TEST(MySqrt, Thorough)
{
    for (int i = 0; i <= 46340; i++)
    {
        EXPECT_EQ(MySqrt(i * i), i);
    }
}