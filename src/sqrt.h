/**
 * @file sqrt.h
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief Header file for the sqrt function.
 * @date 2021-12-26
 * 
 * @copyright Copyright Alyce (c) 2021
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Computes the square root of a number.
 * 
 * @param x A non-negative integer.
 * @return int The square root of x, rounded down to the nearest integer.
 */
int MySqrt(int x);

#ifdef __cplusplus
}
#endif