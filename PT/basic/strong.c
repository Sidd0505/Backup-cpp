#include<stdio.h>
int factorial(int n)
{
    int ans=1,sol;
    for(int i=n;i>0;i--)
    {
        ans =ans*i;
         printf("\n%d\n",ans);
    }
   
    return ans;
   // printf("\n\n%d\n",ans);
}

int main()
{
    int num1,ans,sol=0,rem=0;
    printf("Enter the number :");
    scanf("%d",&num1);
    int num2 =num1;
    while(num1>0)
    {
        rem = num1%10;
        sol = sol+factorial(rem);
        printf("\n%d\n",sol);
        num1 = num1/10;
    }
    if(num2 == sol)
        printf("The number %d is strong number.",num2);
    else
        printf("The number %d is not a strong number.",num2);
}