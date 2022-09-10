/**
 * @file profile.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief
 * @date 2022-09-10
 *
 * @copyright Copyright Alyce (c) 2022
 */

#include "level1.h"

#include <gtest/gtest.h>
#include <thread>

using namespace alyce;

constexpr auto AllowedInaccuracy = 20;
constexpr bool is_in_range(int64_t value, int64_t expected)
{
    auto res = value >= expected - AllowedInaccuracy && value <= expected + AllowedInaccuracy;
    if (!res)
    {
        std::cout << "Value " << value << " is not in range [" << expected - AllowedInaccuracy << ", " << expected + AllowedInaccuracy << "]" << std::endl;
    }
    return res;
}

TEST(L1_Profile, SimpleFunction)
{
    auto i = 0;
    const auto duration = level1::profile([&i]()
        { i = 1; });
    EXPECT_TRUE(is_in_range(duration, 0));
    EXPECT_EQ(i, 1);
}

TEST(L1_Profile, SimpleWait)
{
    const auto duration = level1::profile([]()
        { std::this_thread::sleep_for(std::chrono::milliseconds(100)); });
    EXPECT_TRUE(is_in_range(duration, 100));
}
