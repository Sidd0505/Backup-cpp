#include <algorithm>
#include <numeric>
#include <iostream>
#include <vector>
#include <list>
#include <memory>
#include "Employee.h"

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
    
    //example 1: copy all elements from one container to another
    // std::vector<int> data {1,2,3,4,5};

    // //copy data into a new container called results

    // std::vector<int> result(5); //to have a size so that memory is allocated

    // std::copy(
    //     data.begin(), //source starting
    //     data.end(), //last position
    //     result.begin() //starting point for destination
    // );    

    // Display<std::vector<int>>(result);

    //example 2 : copy elements from one container to another if they satisfy a condition

    // std::vector<int> data {1,2,3,4,5};

    // std::vector<int> result(data.size()); 

    // //step 1 : actual copy based on condition
    // auto itr = std::copy_if(
    //     data.begin(),
    //     data.end(),
    //     result.begin(),
    //     [](int number) { return number > 3;  }
    // );

    // //step 2: determine new size of result
    // int new_size = std::distance(  result.begin(), itr  );

    // //step 3: resize the result according to number of elements occupied
    // result.resize( new_size  );

    // Display<std::vector<int>>(result);


    //example 3: copy if using smart pointer objects


    Container data;
    CreateData < Container > (data);

    Container result(data.size());

    auto itr = std::copy_if(
        data.begin(),
        data.end(),
        result.begin(),
        [](const EmployeePointer& element) { return element->CalculateTax() > 10000.0f ; }
    );

    //step 2: determine new size of result
    int new_size = std::distance(  result.begin(), itr  );

    //step 3: resize the result according to number of elements occupied
    result.resize( new_size  );

    // Display<Container>(result);

    //example 4: accumulate with binary operation +

    std::vector<int> data {10,20,30,40,50};

    // int ans = std::accumulate(
    //     data.begin(),
    //     data.end(),
    //     0
    // );

    // std::cout << ans << "\n";

    //multiply (product)


    int ans = std::accumulate(
        data.begin(),
        data.end(),
        1,
        [](int current_ans, int number) {  return current_ans * number; }
    );




}
