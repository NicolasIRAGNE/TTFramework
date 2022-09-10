/**
 * @file int_holder.h
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief
 * @date 2022-09-10
 *
 * @copyright Copyright Alyce (c) 2022
 */

#pragma once

namespace alyce::level1
{

/**
 * @brief A class that holds an integer value.
 * Pretty cool, right?
 */
class IntHolder
{
public:
    IntHolder() = default;
    explicit IntHolder(int value);

    /**
     * @brief Returns the value of the held int
     */
    int get_value() const;

    /**
     * @brief Sets the value of the held int
     */
    void set_value(int value);

private:
    int mValue = 0;
};

} // namespace alyce::level1
