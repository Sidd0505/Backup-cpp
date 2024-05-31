#include <iostream>
#include "FullTimeEmployee.h"
#include <memory>
#include <list>
#include "functionalities.h"

using Container = std::list<std::shared_ptr<FullTimeEmployee>>;

int main(){
    Container data;
    CreateFullTimeEmployees(data);
//     // std::cout<<data.front()->CalculateBonus()<<"\n";
//     // DisplayBonus(data);

//     for(std::shared_ptr<FullTimeEmployee>& fe: data){
//         std::cout<<*fe<<"\n";
//     }

// //    std::cout<<"Highest salary employee : \n";
// //    DisplayHighestSalaryEmployee(data);

// //    std::cout<<"Employee location with grade A: ";
// //    std::list<std::string> result = FindLocationByGrade(data,Grades::A);
// //    for(std::string s: result){
// //         std::cout<<s<<",\t";
// //    }

// //    std::cout<<"\nProject name of Employee e102: "<<FindProjectName(data,"e102")<<"\n";
}
