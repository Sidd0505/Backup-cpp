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
    
    // //example 1: sort data in ascending order (in-place sort)
    // std::vector<int> data {1,2,3,4,11, 7, 16, 8, 12};
    
    // //data is now sorted in-place (modifies original input)
    // std::sort(data.begin(), data.end()); 

    // Display<std::vector<int>>(data);

    // //example 2: sort data in ascending order

    // std::vector<EmployeePointer> data2;
    // CreateData(data2);

    // std::sort(  
    //     data2.begin(), 
    //     data2.end(),
    //     [](const EmployeePointer& emp1, const EmployeePointer& emp2){
    //         return emp1->salary()  <  emp2->salary();
    //     }
    // );
    //Display<Container>(data2)
    
    //example 3: find_if (find the first occurence of the element 
    //satisfying the condition)

    // std::vector<int> data {17, 21, 5, 35, 29}; //end;

    // auto itr = std::find_if(
    //     data.begin(), 
    //     data.end(),
    //     [](int number) { return number % 5 == 0; }
    // );

    // if (itr == data.end() ){
    //     std::cout << "Such element does not exist\n";
    // }

    // else {
    //     int pos = std::distance(data.begin(),itr);

    //     std::cout 
    //     << "Element found at position " 
    //     << pos 
    //     << " and element is: " 
    //     << *itr << "\n";
    // }

    // //example 4: find employee with matching ID
    
    // std::vector<EmployeePointer> data2;
    // CreateData(data2);

    // auto itr = std::find_if(  
    //     data2.begin(), 
    //     data2.end(),
        
    //     [](const EmployeePointer emp){
    //         return emp->id() == 102;
    //     }
    // );
    // if (itr == data2.end() ){
    //     std::cout << "This ID does not exist\n";
    // }

    // else {
    //     int pos = std::distance(data2.begin(),itr);

    //     std::cout 
    //     << "Employee found at position " 
    //     << pos 
    //     << " and element is: " 
    //     << **itr << "\n";
    // }

    //example 5 : count the data values where condition matches

    std::vector<int> data {10,20, 46, 90, 11};
    
    std::cout << std::count_if(
        data.begin(),
        data.end(),
        [](int number) {   return number % 5 == 0;    }
    );

    

}


// week 1 Modern CPP: (10%)
// -------

// q1 : 20%

// q2 : 35%

// q3 : 45%
// --------------

// 30/30


// quiz 1 5 % UML

// quiz 2 5 % 

// week 2  15%

// q1 : 20%

// q2 : 35%

// q3 : 45%
// -------
// 30/30


// Modern CPP Q1 : HORRIBLE

// Modern CPP Q2 : AVERAGE


// Modern CPP Q3 : GOOD


/*
    1)std::copy : copy all elements from source to destination
    2)std::copy_if : conditional copy elements from source to destination
            - requires resize using distance
    3) accumulate : performing binary operation on answer upto 
        current point by using one element from container
            - rolling binary operation
            - product, sum and even average

    4) any_of, all_of, none_of : check condition , return true or false
        (any element, all elements, no elements)

    5) std::min_element : return the position of the element 
            which is minimum (based on comparator if required)

    6) std::find_if : returns position of first instance matching
    condition. END is returned if element is not found

    7) std::sort : performs in-place sorting using random access iterators

    8) std::count_if :  return the counting of instances matching with
        condition

    9) std::distance : Gives difference between 2 iterators
    
*/