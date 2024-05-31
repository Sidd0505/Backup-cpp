#include<iostream>
#include"header.h"
Conversion::Conversion()                //Default Constructor
{
    xdistance=20.0f;
    ydistance=20.0f;
    int arr[3];
}


Conversion::Conversion(float x, float y, int arr1)      //Parameterized Constructor
{
    xdistance=x;
    ydistance=y;
}


Conversion::Conversion(Conversion &c1)              //MAKING COPY CONSTRUCOR
{
    xdistance=c1.xdistance;
    ydistance=c1.ydistance;
    for (int i = 0; i < 3; i++)
    {
        arr[i]=c1.arr[i];
    }
}


float Conversion::get_x()                   //GETTER FUNCTIONS
{
    return xdistance;
}
float Conversion::get_y()
{
    return ydistance;
}
void Conversion::set_x(float x)            //SETTER FUNCTION
{
    xdistance=x;
}
void Conversion::set_y(float y)
{
    ydistance=y;
}



Conversion Conversion::operator+(Conversion& c1)            //+ OVERLOADED OPERATOR
{
    Conversion obj;
    obj.xdistance = this->xdistance + c1.xdistance;
    obj.ydistance = this->ydistance + c1.ydistance;
    return obj;
}

Conversion operator+(int x, Conversion &c1)                 //INTEGER ADDITION OPERATION
{
    Conversion obj;
    obj.xdistance = x + c1.xdistance;
    obj.ydistance = x + c1.ydistance;
    return obj;
}


Conversion &Conversion::operator++()                    //PRE INCREMENT OPERATION
{
    ++this->xdistance;
    ++this->ydistance;
    return *this;
}


Conversion Conversion::operator++(int)                  //POST INCREMENT BECAUSE OF PARAMETER
{
    Conversion temp = *this;
    this->xdistance++;
    this->ydistance++;
    return temp;
}

float Conversion::operator[](int x)                 //SUBSCRIPT OPERATION
{
    return arr[x]/100.00;
}


Conversion Conversion::operator==(Conversion &c1)       //EQUAL TO EQUAL TO OPERATION
{
    Conversion obj;
    obj.xdistance = this->xdistance == c1.xdistance;
    obj.ydistance = this->ydistance == c1.ydistance;
    return obj;
}

float Conversion::operator()()                  //AVERAGE OPERATION
{
    float sum=0;
    for (int k = 0; k < 3; k++)
    {
        sum+=arr[k];
    }
    std::cout<<"The average of an array is :";
    return sum/3.0f;
}


void Conversion::display()                      //DISPLAY OPERATION
{
    std::cout<<"xdistance= "<<xdistance<<"\n";
    std::cout<<"Ydistance= "<<ydistance<<"\n";
    
}
void Conversion::set_arrayvalues()             //Array Making     
{
    int n=1;
    for (int  num1 = 0; num1 < 3; num1++)
    {
        arr[num1]=n;
        n=n+2;
    }
}
void Conversion::display_arr()              //DISPLAY ARRAY
{
    for (int a = 0; a< 3; a++)
    {
        std::cout<<arr[a]<<" ";
    }
}
