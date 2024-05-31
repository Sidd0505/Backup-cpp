#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<mutex>
#include<functional>
#include<array>
#include<vector>
#include<memory>
#include<algorithm>

using Container = std::array<int, 5>;

using FWrapper = std::function<void(Container&)>;

using FContainer = std::vector<FWrapper>;

void PrintOddNumber(Container& data);

// void CountOfNumbersDivisibleBy4(Container& data);

// extern FWrapper SumOfLargestAndSecondLargest;

// extern FWrapper Minimumelement;

void operation(FContainer& data, Container& array);










#endif // FUNCTIONALITIES_H
