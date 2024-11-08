#include <iostream>
#include <thread>


void squareNumber(int num) {
    int result = num * num;
    std::cout << "The square of " << num << " is: " << result << std::endl;
}

int main() {
    std::thread t(squareNumber, 5);

    // Wait for the thread to finish
    t.join();

    std::cout << "Thread has finished executing. Exiting program." << std::endl;

    return 0;
}