#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter the natural numbers :");
    scanf("%d",&num1);
    sum = (num1*(num1+1))/2;
    printf("The sum of first %d numbers :%d",num1,sum);
}