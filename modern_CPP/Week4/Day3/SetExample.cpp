#include<set>
#include<iostream>
#include<memory>

// using Pointer = std::shared_ptr<Employee>;
// using pointer_container = std::set<Pointer>;

template <typename T>
void display(const T& container)
{
    for(const auto val& : container )
    {
        std::cout<<val <<"\n";}
}

// template<>                                     // Template specialization 
// void display(const pointer_container& data)
// {
//     for(const Pointer& ptr : data)
//     {
//         std::cout<< *ptr <<"\n";
//     }
// }

int main()
{
    std::set<int> s1{1,3,3,4,5,5};
    display(s1);
// display<set><int>(s1);
}