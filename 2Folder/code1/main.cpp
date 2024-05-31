#include<iostream>
#include <string.h>
#include "JobPosting.h"



int main(){ 
    JobPosting j[5];
    std::string jCast[] =  {"G","k"};
    j[0] = JobPosting("Tester","Kpit","Noida","Intern");

    showMenu(j);
}