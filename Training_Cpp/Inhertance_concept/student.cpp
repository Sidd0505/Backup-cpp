#include<iostream>
//#include"student.h"
#include"header.h"

Student::Student()
{
    std::cout<<"Default Constructor";
    rollno = 1011;
    sname = "Jay";

}

Student::Student(int r,std::string nm, std::string ct,int pin, std::string st):
    rollno(r),sname(nm),padd(ct,pin,st)
    {
        std::cout<<"\nstudent(.........) called";
    }

void Student::display()
{
    std::cout<<"Roll no ="<<rollno;
    std::cout<<"Name ="<<sname<<"\t";
    padd.display();
}

