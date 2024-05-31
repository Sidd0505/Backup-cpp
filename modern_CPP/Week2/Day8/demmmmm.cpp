#include<iostream>

int main()
{

int a =10;
int & b = a;

b++;
std::cout<<a;
}