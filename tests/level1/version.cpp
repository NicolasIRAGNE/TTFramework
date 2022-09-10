/**
 * @file version.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief 
 * @date 2022-09-10
 * 
 * @copyright Copyright Alyce (c) 2022
 */

#include "level1.h"

#include <gtest/gtest.h>

using namespace alyce;

TEST(L1_Version, Constructor)
{
    level1::Version version(1, 2, 3);
    EXPECT_EQ(version.get_major(), 1);
    EXPECT_EQ(version.get_minor(), 2);
    EXPECT_EQ(version.get_patch(), 3);
}

TEST(L1_Version, ToString)
{
    level1::Version version(1, 2, 3);
    EXPECT_EQ(version.to_string(), "1.2.3");
}

TEST(L1_Version, FromString)
{
    level1::Version version("1.2.3");
    EXPECT_EQ(version.get_major(), 1);
    EXPECT_EQ(version.get_minor(), 2);
    EXPECT_EQ(version.get_patch(), 3);
}

TEST(L1_Version, Comparisons)
{
    level1::Version version1(1, 0, 0);
    level1::Version version2(1, 1, 0);

    EXPECT_TRUE(version1 < version2);
    EXPECT_TRUE(version1 <= version2);
    EXPECT_FALSE(version1 > version2);
    EXPECT_FALSE(version1 >= version2);
    EXPECT_FALSE(version1 == version2);
    EXPECT_TRUE(version1 != version2);
}