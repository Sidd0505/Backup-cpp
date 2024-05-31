#include<stdio.h>
int main()
{
    int num1,num2,num3,n,ans=0;
    int a =0,b=1;

    printf("Enter the range :");
    scanf("%d",&n);
    printf("0\n1\n");
    for(int i=2;i<n;i++)
    {
        ans = a +b;
        printf("%d\n",ans);
        a =b;
        b = ans;
    }
}