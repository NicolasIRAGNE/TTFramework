/**
 * @file thread_pool.h
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief Header file of the thread_pool class
 * @date 2022-08-23
 *
 * @copyright Copyright Alyce (c) 2022
 */

#pragma once

#include <condition_variable>
#include <functional>
#include <memory>
#include <mutex>
#include <queue>
#include <thread>
#include <vector>

namespace alyce::level4
{

/**
 * An object that can perform an arbitrary number of operations using a fixed number of threads.
 */
class ThreadPool
{
public:
    /**
     * @brief Construct a new Thread Pool object with a given number of threads.
     * @param nthreads Number of threads to use. If unsure, use `std::thread::hardware_concurrency()`.
     */
    explicit ThreadPool(uint32_t nthreads = std::thread::hardware_concurrency());
    ~ThreadPool();

    /**
     * @brief Adds a new task to the queue.
     * @param f The function to be executed.
     */
    void enqueue(const std::function<void()>& f);

    /**
     * @brief Starts executing operations. This is a blocking call.
     */
    void start();

    /**
     * @brief Starts executing operations until stopped, executing any newly added operations as they are added.
     */
    void start_async();

    /**
     * @brief Stops executing operations and terminates all threads.
     */
    void stop();

    /**
     * @brief Waits for all queued operations to complete.
     */
    void wait();

    /**
     * @brief Returns the number of threads in the pool.
     */
    uint32_t nthreads() const;

    /**
     * @brief Returns the number of operations currently queued.
     */
    uint32_t ntasks() const;

private:
    // Add some stuff here
};

} // namespace alyce
