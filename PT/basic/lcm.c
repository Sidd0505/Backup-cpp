#include<stdio.h>
int main()
{
    int num1,num2,ans;
    printf("Enter the num1 :");
    scanf("%d",&num1);
    printf("ENter the num2 :");
    scanf("%d",&num2);
    for(int i=2;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            printf("THe LCM is :%d",i);
            break;
        }
    }
}