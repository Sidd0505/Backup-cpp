#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include <functional>
#include <vector>
#include <array>
#include <memory>

using Container = std::array<int, 5>;
using FWrapper = std::function<void(const Container&)>;
using FContainer = std::vector<FWrapper>;

void PrintOddNumbers(const Container& data);

void CountOfNumberDivisibleby4(const Container& data);

extern FWrapper SumOfElements;

extern FWrapper MinElementOfContainer;

void Operation(FContainer& data, const Container& arr);

#endif // FUNCTIONALITIES_H
