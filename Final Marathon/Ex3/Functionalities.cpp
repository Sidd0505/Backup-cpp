#include"Functionalities.h"
#include<algorithm>

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<FullTimeEmployee>("Siddhant", "001", 450.0f, "Genesis", "Pune", GradeType::A,50));

    data.emplace_back(std::make_shared<FullTimeEmployee>("Sahil", "002", 50.0f, "Genesis2", "Pune", GradeType::B,2));
}

float FullTimeEmployee::CalculateBonus()
    {
    if (type() == GradeType::A)
    {
        return _bonus_percent * salary();
    }
    if (type() == GradeType::B)
    {
        return _bonus_percent * (salary() / 2);
    }
    if (type() == GradeType::C)
    {
        return _bonus_percent * (salary() * 0.25);
    }
    return 0;
}

void display_calculate_bonus(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("EMPTY DATA");
    }
    for (Pointer &ptr : data)
    {
        std::cout << ptr->CalculateBonus() << std::endl;
    }
}



Pointer HighestSalaryPerson(Container &data)
{
    if(data.empty())
    {
        throw std::runtime_error("The data is empty");
    }

    Container result;
    float empsalary = data.front()->salary();
    for(Pointer& ptr : data)
    {
        if(ptr->salary()> empsalary)
        {
             empsalary = ptr->salary();

        }
        return ptr;   
    }
HighestSalaryPerson
}








/*
void FindMinSalaryEmployeeName(Container& data)
{
    if(data.empty())
    {
        throw std::runtime_error("Empty!");
    }

    
        max element will return an iterator to the max element found
    
   auto itr = std::max_element(
        data.begin(),
        data.end(),
        [&](int n){ 
            return 
        }
   );

   std::cout<<"Name of Min salary employee is : "<<itr->second->name()<<"\n";
}


Container MaxElementOfContainer = [](const Container &data){       //use of min_element

    auto itr = std::max_element(data.begin(), data.end());
    std::cout << "Minimum element is: " << *itr << "\n";
};
*/