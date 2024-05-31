#include <iostream>
#include <vector>
#include <list>
#include <memory>
#include "Employee.h"
#include<algorithm>

template <typename T>
void CreateData(T& container) {
    container.emplace_back(
        std::make_shared<Employee>(101, 89000.0f)
    );

    container.emplace_back(
        std::make_shared<Employee>(102, 189000.0f)
    );

    container.emplace_back(
        std::make_shared<Employee>(103, 129000.0f)
    );
    
}

using EmployeePointer = std::shared_ptr<Employee>;
using Container = std::vector< EmployeePointer  >;

template <typename T>
void Display(T& values){
    for(auto& val : values) {
        std::cout << val <<"\n";
    }
}

//template specialization
template <>
void Display(Container& values){
    for(auto& val : values) {
        std::cout << *val <<"\n";
    }
}

int main() {
    //example 1 : std::any_of 

    //check if any of the values in the vector is divisible by 5

    // std::vector<int> data {10, 17, 19, 21, 20};

    // std::cout << std::any_of(
    //     data.begin(),
    //     data.end(),
    //     [](int number) { return number % 5 == 0; }
    // );

    // //example 2: any of used with smart pointers in a container
    // Container data2;
    // CreateData(data2);

    // std::any_of(
    //     data2.begin(),
    //     data2.end(),
    //     //check if any employee calculates tax amount which is above 6000
    //     [](const EmployeePointer& ptr) { return ptr->CalculateTax() > 6000.0f; }
    // );


    //example 3: check if ALL OF the data values in 
    // the container are divObjects(Container& data);isible by 5

    std::vector<int> data {1,2,3,4,5};

    std::cout <<
        std::all_of(
            data.begin(),
            data.end(),
            [](int number) { return number % 5 == 0; }
        );

    //example 4: check if NONE OF the data values
    // are divisible by 5

    std::cout <<
        std::none_of(
            data.begin(),
            data.end(),
            [](int number) { return number % 5 == 0; }
        );

}