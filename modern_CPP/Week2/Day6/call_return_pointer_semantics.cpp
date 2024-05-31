/*
#include<iostream>

#include"employee.h"

employee* Magic(EMployee* emp){
    emp -> setId(100);
    return emp;
}

int main()
{
    employee* e1 = new employee(111);
    employee* modified_e1 = Magic(e1);

    delete e1;
}
*/


//using smart pointer
//Drae diagram and understand -- main/magic/heap what is happening here

#include<iostream>
#include<memory>
#include"employee.h"


using emp_pointer = std::shared_ptr<employee>;

emp_pointer Magic(emp_pointer emp)
{
    emp->setId(100);
    return emp;
}

int main()
{
    emp_pointer e1 = std::make_shared<employee>(101);
    emp_pointer modified_e1 = Magic(e1);
}


//more optimized code
using emp_pointer = std::shared_ptr<employee>

void Magic(emp_pointer& emp)
{
    emp->setId(100);
    return emp;
}

int main()
{
    emp_pointer e1 = std::make_shared<employee>(101);   
    Magic(e1);                                      //will I be modifying e1 --> No that is why we use reference
    //we are just using e1 wrapper to modify the heap memeory not e1 so it is safe to use reference
}

