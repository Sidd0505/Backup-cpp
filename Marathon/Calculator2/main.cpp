#include<iostream>
#include"header.h"
int main()
{
    Conversion con1;
    Conversion con2;
    con1.set_arrayvalues();
    con2=con1+con2;
    con2.display();
    con2=10+con1;                    //INTEGER ADDITION
    con2.display();
    ++con1;                         //PRE INCREMENT 
    con2=con1++;                    //POST INCREMENT
    con1.display();                 //DISPLAY  
    con1.display_arr();            //DISPLAY ARRAY
    std::cout<<"\n"<<con1()<<"\n"; //DISPLAY AVERAGE
    return 0;
}