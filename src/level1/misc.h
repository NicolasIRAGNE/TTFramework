/**
 * @file misc.h
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief
 * @date 2022-09-10
 *
 * @copyright Copyright Alyce (c) 2022
 */

#pragma once

#include <functional>
#include <string>

namespace alyce::level1
{

/**
 * @brief Reverses a string
 * @returns A new string with the characters in reverse order
 */
std::string reverse_string(const std::string& str);

/**
 * @brief Profiles a function call
 *
 * @param func The function to profile
 * @return The time it took to execute the function, in milliseconds
 */
uint64_t profile(const std::function<void()>& func);

} // namespace alyce::level1