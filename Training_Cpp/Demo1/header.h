#ifndef HEADER_H
#define HEADER_H

#include<iostream>
class Account
{
    int accno;
    char name[20];
    double balance;

    public:
        Account();  //declaration
        Account(int, const char *,double);
        void display();
        void accept();
};

#endif    //HEADER_H