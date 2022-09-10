/**
 * @file version.h
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief
 * @date 2022-09-10
 *
 * @copyright Copyright Alyce (c) 2022
 */

#pragma once

#include <string>

namespace alyce::level1
{

class Version
{
public:
    Version(int major = 0, int minor = 0, int patch = 0);
    explicit Version(const std::string& version);

    /**
     * @brief Returns the major version number
     */
    int get_major() const;

    /**
     * @brief Returns the minor version number
     */
    int get_minor() const;

    /**
     * @brief Returns the patch version number
     */
    int get_patch() const;

    /**
     * @brief Returns the version as a string
     */
    std::string to_string() const;

    std::strong_ordering operator<=>(const Version&) const;
    bool operator==(const Version&) const;

private:
    int mMajor = 0;
    int mMinor = 0;
    int mPatch = 0;
};

}