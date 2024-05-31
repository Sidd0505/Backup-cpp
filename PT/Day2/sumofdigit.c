#include<stdio.h>
int main()
{
    int n,sum=0,digit;
    printf("Enter the value :");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n%10;
        n = n/10;
        sum = sum+digit;
    }
    printf("The sum is :%d",sum);
    return 0;
}