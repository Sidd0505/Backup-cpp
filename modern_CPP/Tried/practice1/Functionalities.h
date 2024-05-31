#include<iostream>
#include"Female.h"
#include"Male.h"
#include<vector>
#include<memory>
#include<functional>

using Malepointer=std::shared_ptr<Male>;
using Femalepointer=std::shared_ptr<Female>;

using MaleContainer=std::vector<Malepointer>;
using FemaleContainer=std::vector<Femalepointer>;

void CreateObjects(MaleContainer& Maledata,FemaleContainer& Femaledata);

void Display(const MaleContainer& data);

void GetInstancesByage(const MaleContainer& data,int age);

void highdata(const MaleContainer&data1,std::function<void(const MaleContainer&,int)>fn);


/*
Can reference wrapper take rvalue as an input?

Ans: 

No, a reference wrapper (std::reference_wrapper or the reference capture in a lambda expression)
cannot directly take an rvalue as input. A reference is meant to be associated with an object
with a valid memory address, and an rvalue, being a temporary object, might not have a 
stable memory address.
*/