#include<iostream>
#include"Functionalities.h"


using namespace std::placeholders;

int main(){
    MaleContainer MaleData;
    FemaleContainer FemaleData;

    CreateObjects(MaleData,FemaleData);
    Display(std::ref(MaleData));

    //this function print instance whose type is girl
    auto f1=[&](MaleContainer& male,Female_type type){
        MaleContainer result;
        for(Malepointer& M:MaleData){
            if(type==M->femalewrapper().get()->type()){
                result.emplace_back(M);
                
            }
        }
       
        return result;
    };

    std::cout<<"\n\n---------Data with girl type :-------\n";
    auto &&p= f1(std::ref(MaleData),Female_type::GIRL);
    for(Malepointer &m:p){
        std::cout<<*m<<std::endl;
    }
    

    std::cout<<"\n\n---------Data by age more than given number---\n";
    GetInstancesByage(MaleData,21);

    std::cout<<"\n\n---------Bind Data by age more than given number---\n";
    auto f2=std::bind(&GetInstancesByage,_1,20);
    f2(std::ref(MaleData));


    std::cout<<"\n\n---------Highdata Data by age more than given number---\n";
    highdata(std::ref(MaleData),&GetInstancesByage);
    
}