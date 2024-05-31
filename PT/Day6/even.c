#include<stdio.h>
/*
int main()
{
    int num1,sol,ans,n=1;
    printf("Enter the number :");
    scanf("%d",&num1);
    while(n<=100)
    {
        if(n%2==0)
            printf("%d",n);
            n++;
    }
}*/
//odd numbers
int main()
{
    int num1,sol,ans,n=1;
    printf("Enter the number :");
    scanf("%d",&num1);
    while(n<=100)
    {
        if(n%2!=0)
            printf("%d\n",n);
            n++;
    }
}