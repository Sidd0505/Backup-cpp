#include "Functionalities.h"

void CreateObjects(MaleContainer &Maledata,FemaleContainer& Femaledata)
{
    Femaledata.emplace_back(
        std::make_shared<Female>("Angel",23,"Fair",Female_type::GIRL)
    );
    

    Femaledata.emplace_back(
        std::make_shared<Female>("java wali",22,"Brown",Female_type::GIRL)
    );

    Femaledata.emplace_back(
        std::make_shared<Female>("Rutika",21,"Fair",Female_type::GIRL)
    );


    Maledata.emplace_back(
        std::make_shared<Male>("Harshit",22,"Fair",Male_type::MEN,Femaledata[0])
        );
    Maledata.emplace_back(
        std::make_shared<Male>("Sahil",22,"Brown",Male_type::BOY,Femaledata[1])
        );
    Maledata.emplace_back(
        std::make_shared<Male>("Siddhant MOGA",22,"Fair",Male_type::BOY,Femaledata[2])
        );
}

void Display(const MaleContainer &data)
{
    for(const Malepointer&ptr:data){
        std::cout<<*ptr<<std::endl;
    }
}

void GetInstancesByage(const MaleContainer &data,int age)
{
    for(const Malepointer &ptr:data){
        if(ptr->age()>age&&ptr->femalewrapper().get()->age()>age){
            std::cout<<*ptr<<std::endl;
        }
    }
}

void highdata(const MaleContainer &data1, std::function<void(const MaleContainer &, int)> fn)
{
    fn(data1,20);
}
