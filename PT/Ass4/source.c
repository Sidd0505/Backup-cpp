#include<stdio.h>
#include"header.h"
#include<stdlib.h>

void prime(int n)
{
    int ans, sol, flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
    }
    if (flag == 1)
        printf("THe number is prime %d", n);
    else
        printf("THe number is not prime");
}

int range(int n)
{
    int ans, sol, flag = 1;
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}

int isprime(int n)
{
    int ans, sol, flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}

void coprime(int a,int b)
{
    int c;
    if(a>b)
        c=b;
    else 
     c =a;
    for(int i=1;i<c;i++)
    {
        if(a%i==0 && b%i==0)
            printf("The numbers are co-prime because of factor %d in common\n",i);
    }
}


void primefactors(int n)
{
    int ans,sol;
    for(int i=2;i<n;i++)
    {
        if(n%i==0 && isprime(i))
        {
            printf("\nThe prime factors of the %d numbers is :%d\n",n,i);
        }

    }
}   