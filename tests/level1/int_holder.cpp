/**
 * @file int_holder.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief
 * @date 2022-09-10
 *
 * @copyright Copyright Alyce (c) 2022
 */

#include "level1.h"

#include <gtest/gtest.h>

using namespace alyce;

TEST(L1_IntHolder, Constructor)
{
    level1::IntHolder holder(14);
    EXPECT_EQ(holder.get_value(), 14);
}

TEST(L1_IntHolder, Set)
{
    level1::IntHolder holder(14);
    holder.set_value(42);
    EXPECT_EQ(holder.get_value(), 42);
    holder.set_value(0);
    EXPECT_EQ(holder.get_value(), 0);
}
