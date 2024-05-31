/*
    In cpp 
    the diff betn class and struct is 
    members will be public by default in struct

*/


std::vector<int> v1{1,2,3};



#include<set>
#include<functional>
#include<iostream>

template<typename T>
// void Display(std::set<T>& data){
//     for(const T& val : data){
//         std::cout<< val <<"\n";
//     }
// }
void Display(std::set<T, std::less<float>>& data){
    for(const T& val : data){
        std::cout<< val <<"\n";
    }
}

struct Employee {
    int _id;
    float _salary;


    friend std::ostream &operator<<(std::ostream& os, const Employee& obj)
    {
        os << "Employee : { "<< " id: "<<obj._id<<" slaary :"<<obj._salary << "}";
        return os;
    }
    Employee(int id, float salary):_id(id), _salary(salary){}
    /*
    why we use 1st const here becaue we can compare our for example e1 object
    with themporary i.e. rvalue therefore we wrote const here
    */
    // bool operator<(const Employee& rhs) const {
    //     //return (_salary < rhs._salary) || (rhs._salary>_salary)||(_salary != rhs._salary);
    //     return (_salary < rhs._salary); //not fully corrected write the above line instead
    //     //write line 35 in marathon though return with one condition
    //}
};

/*
stack ka size fixed hai usko consider krke object count kro
*/

//round bracket overload hota hai uss class ka object functor object kaha jata hai



int main()
{
    Employee e1(101, 80000.0f), e2(202,9000.0f), e3(303, 8000.0f), e4(404, 1000.0f);
    std::set<Employee> st{e1,e2,e3,e4};   
    std::set<Employee, std::less<float> > st{e1,e2,e3};
    //Display<std::set<Employee>>(st);
    Display(st);
}

/*
    comparator with how many conditions ?
    Ans: Comparator must be designed for strict weak ordering which requires
     equivalance check 

    I have smart pointer and I want to store them in set?

    Write a comparision function for smart_pointer<T> as a global function( can use
    functors in many cases)

    what about marathon?
    Ans: final marathon may include questions on set of primitive types of user- 
    defined custom classes but NOT USING SMART POINTERS.
*/

/*
In these cases draw diagrams in final marathon
INheritance,
composition
container of smart pointers and u r trying to use STL algos on them 
*/