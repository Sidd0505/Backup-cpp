#include<iostream>

int main()
{

    int num;
    std::cin>>num;
    auto lambda = [&](int val){std::cout<<num*num;};
    lambda(num);
}


