#include<stdio.h>
int main()
{
    int num1,num2=1,num3=1,num4;
    printf("Enter the number :");
    scanf("%d",&num1);
    while(num1>0)
    {
       num2 = num1%10;
       num1 = num1/10;
       num3 *=num2;
        /*
        logic of reverse number.
        num2 = num2*10 + num1%10;
        num1 = num1/10;
        */
    }
    printf("The product of digits is :%d",num3);
}