#include<stdio.h>
int main()
{
    int num1,ans,sol;
    printf("Enter the number you want factors :");
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
        if(num1%i==0)
        {
            printf("Factors are %d\n",i);
        }
    }
    return 0;
}