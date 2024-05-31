#include"Functionalities.h"
#include"Employee.h"
#include"BusinessOwner.h"
#include"DataModeller.h"
using BusinessPointer = std::unique_ptr<BusinessOwner>;
using EmpPointer = std::unique_ptr<Employee>;
std::mutex (mt);

void CreateObjects(Container & data)
{   
    data.emplace_back(
    std::make_unique<DataModeller>(
    
    //instance    
    std::make_unique<Employee>("Siddhant", EmployeeType::OVERSEAS, 780000.0f),
    //vector of floats
    std::vector<float>{19.21f, 134.45f, 204.51f}
    ));

    data.emplace_back(
    std::make_unique<DataModeller>(
    
    //instance    
    std::make_unique<Employee>("Siddhant", EmployeeType::OVERSEAS, 780000.0f),
    //vector of floats
    std::vector<float>{19.21f, 134.45f, 204.51f}
    ));
}

/*
    This fun will accept a container of DataModeller pointer
    
    For EACH POINTER, perform the foll operation

    a) capture the instance reference
    b)Use Holds_alterntive to verify which type of pointer is present in the instance
    c) If Pointer is of type BusinessOwner 
        i) use std::get to fetch BusinessOwner(THis will be safe because if has been checked)
        ii) use the fetch pointer in BusinessOwner to calculate the tax for business
      
     else when pointer is of type Employee

        i) use std::get to fetch EmployeePointer
        ii) use the fetched pointer to fetch type of employee
        iii) if type is regular tax is 10% else it should 20% of salary

*/

void CalculateTaxPayable(const Container &data)
{
    for(const dataPointer& ptr : data)
    {   
        const VType& val = ptr->instance();
        if(std::holds_alternative<BusinessPointer>(val)){
         const BusinessPointer& p = (std::get<BusinessPointer>(val));
            std::cout<<0.1f * (p->revenue()- p->expense());
        }

        else{
            const EmpPointer& p = (std::get<EmpPointer>(val));
            if(p->type()==EmployeeType::REGULAR){
                mt.lock();
                std::cout<<"Tax is 10% "<<0.1f;
                mt.unlock();
            }
            else{
                std::lock_guard<std::mutex> lk(mt);
                std::cout<<"Tax is 20%"<<0.02f* p->salary()<<"\n";
            }
            
        }
    }
}

/*
    CALL THE PARENT OPERATOR OVERLOAD 
*/
void CallParenOperator(const Container &data)
{
    if(data.empty())
        throw std::runtime_error("Data is empty");
    
    else{
        for(const dataPointer& ptr : data ){
            ptr->operator()();
        }
    }
}

//return by value mkaes copy
//assignment also makes copy
//so the solution is take a lvalue reference.
//jub tak classes known hai aap variants pe kam kr sakte hai