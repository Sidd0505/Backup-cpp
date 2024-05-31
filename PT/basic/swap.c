#include<stdio.h>
int main()
{
    int num1,num2;
    printf("ENter the num1 :");
    scanf("%d",&num1);
    printf("ENter the num2 :");
    scanf("%d",&num2);
    int temp;
    temp =num1;
    num1 = num2;
    num2 = temp;
    printf("THe new num1 is :%d",num1);
    printf("THe new num2 is :%d",num2);
}