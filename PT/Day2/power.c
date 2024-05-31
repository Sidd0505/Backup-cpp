#include<stdio.h>
int main()
{
    int n,ans=1,p,power=1,fa=1,tp=1;
    printf("Enter the Number :");
    scanf("%d",&n);
    printf("Enter the power :");
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    {
        ans = ans*n;
    }
    printf("The power is :%d",ans);
}