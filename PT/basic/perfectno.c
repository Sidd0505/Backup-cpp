#include<stdio.h>
int main()
{
    int num1,num2,ans=0;
    printf("ENter the number :");
    scanf("%d",&num1);
    for(int i=1;i<num1;i++)
    {
        if(num1%i==0)
        {
            ans +=i;
        }
    }
    if(ans ==num1)
        printf("THe number is perfect.");
    else
        printf("THe number is not perfect.");
}