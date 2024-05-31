#include<stdio.h>
int main()
{
    int num1,ans=1;
    printf("Enter the number :");
    scanf("%d",&num1);
    for(int i=num1;i>0;i--)
    {
        ans = i*ans;
        

    }
    printf("The answer is :%d",ans);
}   