/**
 * @file tests_thread_pool.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief Unit tests for the thread_pool class
 * @date 2022-08-23
 *
 * @copyright Copyright Alyce (c) 2022
 */

#include "level4.h"

#include <gtest/gtest.h>

using namespace alyce;

TEST(L4_ThreadPool, nthreads_OneThread)
{
    level4::ThreadPool thread_pool(1);
    EXPECT_EQ(thread_pool.nthreads(), 1);
}

TEST(L4_ThreadPool, nthreads_TwoThreads)
{
    level4::ThreadPool thread_pool(2);
    EXPECT_EQ(thread_pool.nthreads(), 2);
}

TEST(L4_ThreadPool, nthreads_HardwareConcurrency)
{
    level4::ThreadPool thread_pool;
    EXPECT_EQ(thread_pool.nthreads(), std::thread::hardware_concurrency());
}

TEST(L4_ThreadPool, enqueue_Simple)
{
    level4::ThreadPool thread_pool(1);
    thread_pool.enqueue([]() {});
    EXPECT_EQ(thread_pool.ntasks(), 1);
}

TEST(L4_ThreadPool, enqueue_Multiple)
{
    level4::ThreadPool thread_pool(1);
    thread_pool.enqueue([]() {});
    thread_pool.enqueue([]() {});
    thread_pool.enqueue([]() {});
    EXPECT_EQ(thread_pool.ntasks(), 3);
}

TEST(L4_ThreadPool, Basic)
{
    level4::ThreadPool thread_pool(1);
    thread_pool.enqueue([]() {});
    EXPECT_EQ(thread_pool.ntasks(), 1);
    thread_pool.start();
    EXPECT_EQ(thread_pool.ntasks(), 0);
}

TEST(L4_ThreadPool, Basic_Async)
{
    level4::ThreadPool thread_pool(1);
    thread_pool.enqueue([]()
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    });
    EXPECT_EQ(thread_pool.ntasks(), 1);
    thread_pool.start_async();
    EXPECT_EQ(thread_pool.ntasks(), 1);
    thread_pool.wait();
    EXPECT_EQ(thread_pool.ntasks(), 0);
}

TEST(L4_ThreadPool, Basic_Async_Multiple)
{
    level4::ThreadPool thread_pool(1);
    thread_pool.enqueue([]()
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    });
    thread_pool.enqueue([]()
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    });
    thread_pool.enqueue([]()
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    });
    EXPECT_EQ(thread_pool.ntasks(), 3);
    thread_pool.start_async();
    EXPECT_EQ(thread_pool.ntasks(), 3);
    thread_pool.wait();
    EXPECT_EQ(thread_pool.ntasks(), 0);
}

TEST(L4_ThreadPool, Basic_VectorTask_EightThreads)
{
    level4::ThreadPool thread_pool(8);
    auto v = std::vector<int>(512);
    for (int i = 0; i < 512; i++)
    {
        thread_pool.enqueue([&v, i]()
        {
            v[i] = i;
        });
    }
    thread_pool.start();
    for (int i = 0; i < 512; i++)
    {
        EXPECT_EQ(v[i], i);
    }
}

TEST(L4_ThreadPool, Basic_VectorTask_OneThread)
{
    level4::ThreadPool thread_pool(1);
    auto v = std::vector<int>(512);
    for (int i = 0; i < 512; i++)
    {
        thread_pool.enqueue([&v, i]()
        {
            v[i] = i;
        });
    }
    EXPECT_EQ(thread_pool.ntasks(), 512);
    thread_pool.start();
    EXPECT_EQ(thread_pool.ntasks(), 0);
    for (int i = 0; i < 512; i++)
    {
        EXPECT_EQ(v[i], i);
    }
}

TEST(L4_ThreadPool, Basic_VectorTask_Async_EightThreads)
{
    level4::ThreadPool thread_pool(8);
    auto v = std::vector<int>(512);
    for (int i = 0; i < 512; i++)
    {
        thread_pool.enqueue([&v, i]()
        {
            v[i] = i;
        });
    }
    EXPECT_EQ(thread_pool.ntasks(), 512);
    thread_pool.start_async();
    thread_pool.wait();
    EXPECT_EQ(thread_pool.ntasks(), 0);
    for (int i = 0; i < 512; i++)
    {
        EXPECT_EQ(v[i], i);
    }
}

TEST(L4_ThreadPool, Basic_VectorTask_Async_OneThread)
{
    level4::ThreadPool thread_pool(1);
    auto v = std::vector<int>(512);
    for (int i = 0; i < 512; i++)
    {
        thread_pool.enqueue([&v, i]()
        {
            v[i] = i;
        });
    }
    EXPECT_EQ(thread_pool.ntasks(), 512);
    thread_pool.start_async();
    thread_pool.wait();
    EXPECT_EQ(thread_pool.ntasks(), 0);
    for (int i = 0; i < 512; i++)
    {
        EXPECT_EQ(v[i], i);
    }
}

TEST(L4_ThreadPool, ExpensiveTask_EightThreads)
{
    level4::ThreadPool thread_pool(8);
    for (int i = 0; i < 512; i++)
    {
        thread_pool.enqueue([i]()
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        });
    }
    EXPECT_EQ(thread_pool.ntasks(), 512);
    thread_pool.start();
    EXPECT_EQ(thread_pool.ntasks(), 0);
}