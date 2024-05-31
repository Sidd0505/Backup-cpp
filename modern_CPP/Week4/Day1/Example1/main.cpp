#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include<vector>

std::mutex mtx;
std::condition_variable cv;
int globalNum1, globalNum2;
std::vector<int> globalVector;

void sumFunction() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []{return globalNum1 != 0 && globalNum2 != 0;});
    int sum = globalNum1 + globalNum2;
    std::cout << "The sum of " << globalNum1 << " and " << globalNum2 << " is " << sum << std::endl;
}

void printSumFunction() {
    int n;
    std::cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    std::cout << "The sum of the first " << n << " numbers is " << sum << std::endl;
}

void oddNumbersFunction() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []{return globalVector.size() != 0;});
    std::cout << "The odd numbers in the vector are: ";
    for (int i : globalVector) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

void threadFunction(int id) {
    switch (id) {
        case 0:
            sumFunction();
            break;
        case 1:
            printSumFunction();
            break;
        case 2:
            oddNumbersFunction();
            break;
    }
}

int main() {
    std::thread threads[3];
    std::cin >> globalNum1 >> globalNum2;
    globalVector = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cv.notify_all();
    for (int i = 0; i < 3; i++) {
        threads[i] = std::thread(threadFunction, i);
    }
    for (int i = 0; i < 3; i++) {
        threads[i].join();
    }
    return 0;
}