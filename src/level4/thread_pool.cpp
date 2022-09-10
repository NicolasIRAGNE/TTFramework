/**
 * @file thread_pool.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief Implementation of the thread_pool class
 * @date 2022-08-23
 *
 * @copyright Copyright Alyce (c) 2022
 */

#include "thread_pool.h"
#include <iostream>

namespace alyce::level4
{

ThreadPool::ThreadPool(uint32_t nthreads)
{
    (void)nthreads;
}

ThreadPool::~ThreadPool()
{
}

void ThreadPool::enqueue(const std::function<void()>& f)
{
}

void ThreadPool::start()
{
}

void ThreadPool::start_async()
{
}

void ThreadPool::stop()
{
}

void ThreadPool::wait()
{
}

uint32_t ThreadPool::nthreads() const
{
    return 0;
}

uint32_t ThreadPool::ntasks() const
{
    return 0;
}

} // namespace alyce::level4