/**
 * @file int_holder.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief 
 * @date 2022-09-10
 * 
 * @copyright Copyright Alyce (c) 2022
 */

#include "int_holder.h"
#include <functional>

namespace alyce::level2
{

IntHolder::IntHolder()
{
}

IntHolder::IntHolder(int value)
{
}

IntHolder::IntHolder(int* value)
{
}

IntHolder::~IntHolder()
{
}

int& IntHolder::operator*() const
{
    return *mValue;
}

int* IntHolder::get_pointer()
{
    return nullptr;
}

void IntHolder::reset(int* value)
{

}

} // namespace alyce::level2
