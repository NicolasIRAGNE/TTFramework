/**
 * @file tests_medium.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief 
 * @date 2022-09-09
 * 
 * @copyright Copyright Alyce (c) 2022
 */

#include "level2.h"

#include <gtest/gtest.h>

using namespace alyce;

TEST(L2_IntHolder, DefaultConstructor)
{
    level2::IntHolder holder;
    EXPECT_EQ(*holder, 0);
}

TEST(L2_IntHolder, ConstructorWithValue)
{
    level2::IntHolder holder(42);
    EXPECT_EQ(*holder, 42);
}

TEST(L2_IntHolder, ConstructorWithPointer)
{
    auto value = new int(42);
    auto holder_ptr = std::make_unique<level2::IntHolder>(std::move(value));
    EXPECT_EQ(**holder_ptr, 42);
    holder_ptr.reset();
}

TEST(L2_IntHolder, Reset)
{
    auto val1 = new int(42);
    auto val2 = new int(43);
    auto holder = level2::IntHolder(val1);
    EXPECT_EQ(*holder, 42);
    holder.reset(val2);
    EXPECT_EQ(*holder, 43);
}

TEST(L2_IntHolder, Access)
{
    auto val = new int(10);
    auto holder = level2::IntHolder(val);
    EXPECT_EQ(*holder, 10);
    *holder = 123;
    EXPECT_EQ(*holder, 123);
}