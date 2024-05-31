#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the number1 :");
    scanf("%d",&num1);
    printf("Enter the number2 :");
    scanf("%d",&num2);
    int i=num1;
    while(i<=num2)
    {
        if(i%2==0)
            printf("The even numbers between %d and %d is :%d\n",num1,num2,i);   
        i++;
    }
}