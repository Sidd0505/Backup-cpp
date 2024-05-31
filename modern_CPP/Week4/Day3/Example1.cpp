#include<algorithm>
#include<iostream>
#include<memory>
#include<unordered_map>
#include<numeric>

/*
There is no front and back in map therefore it will only be emplace no emplace_back
*/

class Employee
{
private:
    std::string _name;
    float _salary;
public:
    Employee() = default;
    ~Employee() = default;
    Employee(Employee&&) = default;
    Employee(const Employee &) = default;
    Employee& operator= (Employee&) = default;
    Employee& operator= (Employee&&) = default;

    Employee(std::string name, float salary);

    std::string name() const { return _name; }

    float salary() const { return _salary; }

};

Employee::Employee(std::string name, float salary)
            :_name(name), _salary(salary)
{
}

using Pointer = std::shared_ptr<Employee>;
using Container = std::unordered_map<int, Pointer>;

void CreateObjects(Container& data){
    data.emplace(
        std::make_pair(101, std::make_shared<Employee>("Siddhant", 70000.0f))
    );

    data.emplace(
        std::make_pair(102, std::make_shared<Employee>("Pranjal", 4545.0f))
    );

    data.emplace(
        std::make_pair(103, std::make_shared<Employee>("Aadesh", 8989.0f))
    );

    data.emplace(
        std::make_pair(104, std::make_shared<Employee>("Aniket", 1213.0f))
    );

}


/*
    Total salary for all employees
*/

void TotalSalary(const Container& data)
{
    if(data.empty())
    {
        throw std::runtime_error("Empty!");
    }

  //  float total= 0.0f;

//     for( auto& [k,v] : data){
//         total = total + v->salary();
//     }



// // Alternatively 

// for(auto itr = data.begin(); itr!=data.end();itr++)
// {
//    // total = total + *itr.second->salary();

//     total = total + itr->second->salary();
// }

// //Alternatively again

// for(const std::pair<int, Pointer>& ptr : data)
// {
//     total = total + ptr.second->salary();
// }

//Alternatively (Compulsary in modern week 4 marathon)
float total_val = std::accumulate (
    data.begin(),
    data.end(),
    0.0f, 
    [](float sum_till_current_val,const std::pair<int, Pointer>& row){
        return sum_till_current_val + row.second->salary();
    }
    
);
    std::cout<<"The Total salary is :"<< total_val<<"\n";
}

/*
    find the name of employee with lowest salary;
*/

void FindMinSalaryEmployeeName(Container& data)
{
    if(data.empty())
    {
        throw std::runtime_error("Empty!");
    }

    /*
        min element will return an iterator to the min element found
    */
   auto itr = std::min_element(
        data.begin(),
        data.end(),
        [](const std::pair<int, Pointer>& pair1, const std::pair<int, Pointer>& pair2){ 
            return pair1.second->salary() < pair2.second->salary();
        }
   );

   std::cout<<"Name of Min salary employee is : "<<itr->second->name()<<"\n";
}

void CheckConditionsAtLeastONe(const Container& data)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    bool flag = std::any_of(
        data.begin(),
        data.end(),
        [](const std::pair<int, Pointer>& ptr){return ptr.second->salary()>80000.0f ;}
    );

    std::cout<< flag <<"\n";
}
//any_of, all_of, none_of works same try above
/*
    Count the number of map pair where salary is above 50000
*/

void CountAbove50000Emplouees(const Container& data){
    if(data.empty())
    {
        throw std::runtime_error("Data is empty");
    }
    int count = std::count_if(
        data.begin(),
        data.end(),
        [](const std::pair<int, Pointer>& ptr){return ptr.second->salary()>80000.0f ;}
    );

    std::cout<< count <<"\n";
}

/*
    copy - all elements gets copied from source to destination unconditionally 
    copy_if - copy elements from source to destinstion if the elements satisfy 
              the condition
    all_of - return a boolean to indicate if all elements satisfy conditions
    any_of - return a boolean to indicate if at least 1 element satisifies 
             condition
    nono_of - return a boolean to indicate if none of the elements satisfy 
              condition
    find-if - return the iterator to the FIRST element that satisifes the condition,
             else end iterator (when no element satisfies condition)
    
    accumulate - produces one aggregated final output value by performing binary value
                If u want to calculate average just do accumulate and divide by total
                no. of elements
    max_element - returns iterator to the "maximum" element in the container 
                  Maximum can be determined by writing a custom operator

    min_element - returns iterator to the "minimum" element in the container.
                  Minimum can be determined by writing a custom operator   
    
    sort - write a comparator to perform ascending or descending sort of original 
           container (in-place sorting)
           this fun returns void so no output will be there because there is no point
           in creating copies.
            LIST have in-built fun sort in them 

    
    
    
    condition ke basis pe things copy krni hai toh copy
    variant
*/






/*
for iterator --> begin:front key position 
front - front data return
*/

/*
    Scenario A : a function. I have input before creating thread I don't want
    return value

    answer : std::thread should be enough 

    Scenario B : A function, I have input before creating thread
    I want return value

    answer: use std::async without FUTURE INPUT but with a future for return

    Scenario 3:
    I have A function, I don;t have input before before creating thread I 
    don't want to return 

    Answer : use std::async with future INPUT and future return type (could be void )

    Scenario 4: A function, I don't have input before creating thread 
    I want RETURN value 

    Answer : use add::async with future INPUT and future return type 


    Scenario 5: A function, I have Input, I want to start thread using the input
    I want my function to some work but stop or block before completion 
    and wait for some event to happen 
    (like waiting for thread, car restart and all)
    Event based partial scenarios 
    
    Answer : conditional variable based code using unique lock.  

*/



int main()
{
    Container(data);
    CreateObjects(data);
    TotalSalary(data);
}


