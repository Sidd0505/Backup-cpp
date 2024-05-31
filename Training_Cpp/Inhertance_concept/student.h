#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include"header.h"

class Student
{
    int rollno;
    std::string sname;
    Address padd;


    public:
        Student();
        Student(int, std::string, std::string, int, std::string);
        void display();
        ~Student();
        Student(int, std::string, std::string, int, std::string);

};



#endif // STUDENT_H
