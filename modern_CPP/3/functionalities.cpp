#include "functionalities.h"
#include "Grades.h"

void CreateFullTimeEmployees(Container &data)
{
    data.emplace_back(std::make_shared<FullTimeEmployee>("ADAS","Pune",Grades::A,2,"abc","e101",25000.0f,std::make_shared<Department>("d1",10)));
    data.emplace_back(std::make_shared<FullTimeEmployee>("Autosar","bangalore",Grades::B,60,"pqr","e102",23000.0f,std::make_shared<Department>("d2",5)));
    data.emplace_back(std::make_shared<FullTimeEmployee>("Powertrain","mumbai",Grades::C,0,"xyz","e103",30000.0f,std::make_shared<Department>("d3",4)));
    
}
std::string DisplayGrades(Grades g){
    switch (g)
    {
    case Grades::A:
        return "A";
    
    case Grades::B:
        return "B";
    
    default:
        return "C";
    }
}

void DisplayHighestSalaryEmployee(Container &data)
{
    if(data.empty()){
        throw std::runtime_error("no data in container\n");
    }
    std::shared_ptr<FullTimeEmployee> result;
    float maxSalary = data.front()->salary();
    for(std::shared_ptr<FullTimeEmployee>& fe : data){
        if(fe->salary() > maxSalary){
            result = fe;
        }
    }
    std::cout<<*result<<"\n";
}

std::list<std::string> FindLocationByGrade(Container &data, Grades grade)
{
    if(data.empty()){
        throw std::runtime_error("no data in container");
    }

    std::list<std::string> result;
    for(std::shared_ptr<FullTimeEmployee>& fe : data){
        if(fe->grade() ==  grade){
            result.push_back(fe->employeeLocation());
        }
    }

    if(result.empty()){
        return {"Employee with grade not found"};
    }

    return result;
}

std::string FindProjectName(Container &data, std::string id)
{
    if(data.empty()){
        throw std::runtime_error("no data in container\n");
    }

    for(std::shared_ptr<FullTimeEmployee>& fe : data){
        if(fe->id() == id){
            return fe->projectName();
        }
    }
    
    return "id not found";
}

void DisplayBonus(Container &data)
{
    if(data.empty()){
        throw std::runtime_error("no data in container\n");
    }

    for(std::shared_ptr<FullTimeEmployee>& fe : data){
        std::cout<<"Bonus of Employee "<<fe->id()<<" : "<<fe->CalculateBonus()<<"\n";
    }
}