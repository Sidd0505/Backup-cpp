#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<thread>
#include<memory>
#include<array>
#include<functional>

using Container = std::array<std::thread, 3>;

std::vector<int> v1{1,2,3,4,5};

void Returnsum(int & n1, int & n2);

void SumOfFirstNNumbers(int & N);

void OddNumbersInVector(std::vector<int> f1);

void Operation(std::function<void(Container)> func,Container& data);


#endif // FUNCTIONALITIES_H
