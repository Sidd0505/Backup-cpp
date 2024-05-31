#include<iostream>
#include"salesman.h"
#include"manager.h"

// class MyClass{
//     Employee *p;

//     public:
//     MyClass(Employee *ep){
//         p=ep;
//     }
//     ~MyClass(){
//         delete p;
//     }
//     Employee& operator*(){
//         return *p;
//     }
//     Employee* operator->(){
//         return p;
//     }
// };

int main(){
    // MyClass m1(new Salesperson());       //Making objects using class
    // MyClass m2(new Manager());
    // (*m1).display();
    // m2->display();

    // Employee e1;
    // e1.display();
    // std::cout<<"\nNet Salary   : "<<e1.calNetSalary()


    // Salesperson sp1;
    // sp1.display();

    // Salesperson sp2={100,"Nikko",50000,100000,0.5};
    // sp2.display();
    // std::cout<<"Net Salary   : "<<sp2.calNetSalary()<<std::endl;

    // Employee *e=new Salesperson();
    // e->display();
    // Salesperson *sp=nullptr;
    // sp=dynamic_cast<Salesperson*>(e);
    // sp->calculateCommission();
    // delete e;


    // Employee sp1;                       //Creating object of abstract class gives error
    // sp1.display();

    Employee *e=new Salesperson();
    e->display();

    if(typeid(*e)==typeid(Salesperson)){                //RTTI - Run Time Type Identification
        Salesperson *sp=dynamic_cast<Salesperson*>(e);  //down-casting
        std::cout<<"Commission   : "
        <<sp->calculateCommission()<<std::endl;
    }else {
        std::cout<<"Other Type\n";
    }
    delete e;


    // Manager *sp=dynamic_cast<Manager*>(e);       //Gives Segmentation fault 
    // sp->calNetSalary();                          //because of type casting

    //Manager *sp=static_cast<Manager*>(e);         //This doesnt give any error
    //std::cout<<sp->calNetSalary()<<std::endl;     //But this gives fake answer
                                                    
    return 0;
}