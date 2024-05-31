#include<stdio.h>
#include"header.h"

int main()
{
    int num1;
    printf("Enter the number :");
    scanf("%d",&num1);
   // check(num1);
    if(check(num1))   //actual argument
        printf("The number is even.");
    else
        printf("The number is odd.");
}
