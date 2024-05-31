#include<stdio.h>
int main()
{
    int num1,sol,ans=1,expo;
    printf("ENter the number :");
    scanf("%d",&num1);
    printf("Enter the power :");
    scanf("%d",&expo);
    for(int i=1;i<=expo;i++)
    {
        ans = ans*num1;
    }
    printf("The ans is :%d",ans);
}
