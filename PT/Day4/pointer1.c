#include<stdio.h>
//Area and perimeter of circle.

void area(int, float *,float *);
int main()
{
    float a,p;
    area(4,&a,&p);
    printf("The area of circle is :%f\n",a);
    printf("The perimeter of the circle is :%f\n",p);
    return 0;
}

void area(int r,float *x, float *y)   //here 4 is pass by value and *p is pass by address.
{
    *x = 3.14*r*r;
    *y = 3.14*2*r;
}