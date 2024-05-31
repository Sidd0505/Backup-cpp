#include<stdio.h>
#include"header.h"

void factorial(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans = ans*i;
    }
    printf("The factorial of the number %d is :%d\n",n,ans);
}

void display(int n)
{
    int ans=1;
    printf("The table of %d is as follows :\n",n);
    for(int i=1;i<=10;i++)
    {
        ans = i *n;
        printf("%d cha %d\n",n,ans);   
    }
}

void reverse(int n)
{
    int ans=0,sol=n;
    while(n>0)
    {
        ans =ans*10+ n%10;
        n = n/10;
    }
    printf("The reverse of the %d is %d.\n",sol,ans);
}