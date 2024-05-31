//prime range
#include<stdio.h>
int isprime(int n)
{
    int ans,flag=1;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
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
    printf("Enter the number :");
    scanf("%d",&num1);
    for(int i=2;i<num1;i++)
    {
    if(num1%i==0 && isprime(i))
    {
        printf("The prime factors are :%d\n",i);
    }
    }
    return 0;
}