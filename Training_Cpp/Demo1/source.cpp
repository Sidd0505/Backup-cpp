#include <iostream>
#include <cstring>
#include "header.h"

// return_type classname::functioname(){  }

Account::Account()
{
    std::cout << "\nAccount() called.....";
    accno = 10111;
    strcpy(name, "Yash");
    balance = 1000.56;
}

Account::Account(int n, const char *nm, double b) : accno(n), balance(b)
{
    strcpy(name, nm);
}

void Account::display()
{
    std::cout << "\n Account number :" << accno;
    std::cout << "\n Name =" << name;
    std::cout << "\n Balance =" << balance;
}

void Account::accept()
{
    std::cout << "Account no is :";
    std::cin >> accno;
    std::cout << "Name is :";
    std::cin >> name;
    std::cout << "Balance is :";
    std::cin >> balance;
}
