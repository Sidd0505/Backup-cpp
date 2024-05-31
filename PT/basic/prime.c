#include<stdio.h>
int prime(int num)
{
    int ans,sol;
    int flag =1;
    for(int i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            flag--;
            break;
        }
    }
    return flag;
}
int main()
{
    int num1;
    printf("ENter the number :");
    scanf("%d",&num1);
    if(prime(num1))
        printf("THe number %d is prime.",num1);
    else
        printf("The number %d is not prime.",num1);
}