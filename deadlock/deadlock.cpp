#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mutex1;
std::mutex mutex2;

// When running this program you will need to do ctrl+C to cancle and get a partial report from valgrind

void thread1() {
    // lock mutex1
    std::lock_guard<std::mutex> lock1(mutex1);
    std::cout << "Thread 1: Holding mutex1\n";
    
    // wait
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    
    // try to lock mutex2, but it may be locked by thread2, leading to a deadlock
    std::cout << "Thread 1: Waiting for mutex2\n";
    std::lock_guard<std::mutex> lock2(mutex2);
    std::cout << "Thread 1: Acquired mutex2\n";
}

void thread2() {
    // lock mutex2
    std::lock_guard<std::mutex> lock2(mutex2);
    std::cout << "Thread 2: Holding mutex2\n";
    
    // wait
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    
    // try to lock mutex1, but it may be locked by thread1, leading to a deadlock
    std::cout << "Thread 2: Waiting for mutex1\n";
    std::lock_guard<std::mutex> lock1(mutex1);
    std::cout << "Thread 2: Acquired mutex1\n";
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);
    
    // Wait for both threads to finish (they will never finish due to deadlock)
    t1.join();
    t2.join();
    
    return 0;
}