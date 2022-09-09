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

namespace alyce
{

ThreadPool::ThreadPool(uint32_t nthreads)
{
    (void)nthreads;
    std::cout << "ThreadPool::ThreadPool()" << std::endl;
}

ThreadPool::~ThreadPool()
{
    std::cout << "ThreadPool::~ThreadPool()" << std::endl;
}

void ThreadPool::enqueue(const std::function<void()>& f)
{
    std::cout << "ThreadPool::enqueue()" << std::endl;
}

void ThreadPool::start()
{
    std::cout << "ThreadPool::start()" << std::endl;
}

void ThreadPool::start_async()
{
    std::cout << "ThreadPool::start_async()" << std::endl;
}

void ThreadPool::stop()
{
    std::cout << "ThreadPool::stop()" << std::endl;
}

void ThreadPool::wait()
{
    std::cout << "ThreadPool::wait()" << std::endl;
}

uint32_t ThreadPool::nthreads() const
{
    std::cout << "ThreadPool::nthreads()" << std::endl;
    return 0;
}

uint32_t ThreadPool::ntasks() const
{
    std::cout << "ThreadPool::ntasks()" << std::endl;
    return 0;
}

} // namespace alyce