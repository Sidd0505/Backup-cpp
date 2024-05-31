#include "Functionalities.h"
#include <mutex>
#include <algorithm>

std::mutex mt;
bool flag;
std::condition_variable cv;

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<FullTimeEmployee>(
        "Vaishnavi","a101",80000.0f,"Xeon","Phase-1",Grade::A, 20  
    ));
    data.emplace_back(std::make_shared<FullTimeEmployee>(
        "Kartiki","b102",90000.0f,"Autosar","Phase-3",Grade::B,30
    ));
    data.emplace_back(std::make_shared<FullTimeEmployee>(
        "Anuja","c103",92000.0f,"Vehicles","Phase-2",Grade::C,25
    ));
}

void BonusOfAllEmoloyees(const Container &data)
{
    for(const Pointer& ptr : data){
        std::lock_guard<std::mutex> lg(mt);
        std::cout << ptr->CalculateBonus()<< " ";
    }
    
}

void HighestSalaryEmployee(const Container &data){
    auto itr = std::max_element(data.begin(), data.end(), 
            [&](const Pointer& emp1, const Pointer& emp2){
                return emp1->salary() < emp2->salary();
            }
        );
     mt.lock();
    std::cout << "Employee with highest salary: \n" << **itr << "\n\n";
    mt.unlock();
}

std::string EmployeesWithGivenGrade(const Container &data, Grade& gr){
    
    std::unique_lock<std::mutex> ul(mt);
    cv.wait( ul, [](){ return flag; } );
    
    auto  itr = std::find_if(data.begin(),
    data.end(),
    [&](const Pointer& ptr){
        return ptr->grade() == gr;
            
    });
    if (itr == data.end())
    {
        return "ID not found";
    }
    return (*itr)->employeeLocation();
    
    /* Adhi herun krun output kadh  ani mg he comment krun sirranna dkhv
    void chya jagi std::string kr func ch return type jevha ha varcha implement krshil okay         */
    // for(const Pointer& ptr : data){
    //     if (ptr->grade() == gr)
    //     {
    //         std::cout << ptr->employeeLocation() << "\n";
    //     }
    // }
}

std::string ProjectNameOfGivenEmployee(const Container &data, std::future<std::string>& ft)
{
    std::string id = ft.get();
    auto itr = std::find_if(data.begin(), data.end(), 
            [&](const Pointer& ptr){ return ptr->id() == id; }
        );
    if (itr == data.end())
    {
        return "ID not found";
    }
    return (*itr)->projectName();
}
