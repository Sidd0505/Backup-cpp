#include<stdio.h>
#include"header.h"

void pattern1(int n)
{
    int ans=0,sum=0;
    for(int i=0;i<n;i++)
    {
        ans = (ans*10)+1;
        sum +=ans;
        printf("%d +",ans);
    }
    printf("\nThe sum is :%d\n",sum);
}

void pattern2(int n)
{
    int ans=0,sum=0;
    for(int i=0;i<n;i++)
    {
        ans = ans*10+2;
        sum +=ans;
        printf("%d +",ans);
    }
    printf("\nThe sum is %d\n",sum);
}

void pattern3(int n)
{
    int ans=0,sum=0;
    for(int i=1;i<n;i++)
    {
        ans = (ans*10)+i;
        sum +=ans;
        printf("%d +",ans);
    }
    printf("THe sum is :%d",sum);
}

void pattern4(int n)
{
    int ans=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        ans = (ans*10)+i;
        sum +=ans;
          printf("%d +",ans);
    }
    printf("\nTHe sum is :%d\n",sum);
    
}