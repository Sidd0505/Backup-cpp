#include<iostream>
#include<thread>
#include<array>

std::array<int,10>result;
void square(std::array<int,5> arr, int num)
{
    int k =0;
    result[k++] = num*num;
}

void cube(std::array<int,5> arr, int num)
{
    int k =0;
    result[k++] = num*num*num;
}

int main()
{}