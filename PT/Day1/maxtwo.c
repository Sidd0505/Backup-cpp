#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter Num1 and Num2 :");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("Num1 %d is greater than Num2 %d",num1,num2);
    else
        printf("Num2 %d is greater than Num1 %d",num2,num1);
}