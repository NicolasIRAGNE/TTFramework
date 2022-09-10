/**
 * @file version.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief 
 * @date 2022-09-10
 * 
 * @copyright Copyright Alyce (c) 2022
 */

#include "version.h"

namespace alyce::level1
{

    Version::Version(int major, int minor, int patch)
{
}

Version::Version(const std::string& version)
{
}

int Version::get_major() const
{
    return 0;
}

int Version::get_minor() const
{
    return 0;
}

int Version::get_patch() const
{
    return 0;
}

std::string Version::to_string() const
{
    return std::string();
}

std::strong_ordering Version::operator<=>(const Version& other) const
{
    return std::strong_ordering();
}

bool Version::operator==(const Version& other) const
{
    return false;
}

} // namespace alyce::level1