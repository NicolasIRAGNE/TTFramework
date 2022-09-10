/**
 * @file int_holder.h
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief 
 * @date 2022-09-10
 * 
 * @copyright Copyright Alyce (c) 2022
 */

#pragma once

namespace alyce::level2
{

/**
 * @brief A class that holds an Int. But this time, the int is allocated on the heap.
 * The held int is either allocated by the Holder, or passed as a parameter to the constructor. In all cases, the Holder
 * is responsible for managing the memory (deleting it when appropriate).
 * Pretty cool, right?
 */
class IntHolder
{
public:
    /**
     * @brief Construct a new IntHolder. The held int is initialized to 0.
     */
    IntHolder();

    /**
     * @brief Construct a new Int Holder object
     * @param value The value to initialize the held int to.
     */
    explicit IntHolder(int value);

    /**
     * @brief Construct a new Int Holder object
     * @param value A pointer to the int to hold. The Holder will take ownership of the pointer.
     */
    explicit IntHolder(int* value);

    /**
     * @brief Destroy the Int Holder object and free the held int.
     */
    ~IntHolder();

    /**
     * @brief Gets a pointer to the held int.
     */
    int* get_pointer();

    /**
     * @brief Assigns a new pointer to be managed by the IntHolder (deleting the old one)
     * @param value The new pointer to manage
     */
    void reset(int* value);

    /**
     * @brief Access the held int
     */
    int& operator*() const;

private:
    int* mValue = nullptr;
};

}