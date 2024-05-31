#include<stdio.h>

int prime(int n)
{
    int flag =1;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
            flag--;
    }
    return flag;
}
/*
int primerange(int num1,int num2)
{
    int ans;
    for(int i=num1;i<=num2;i++)
    {
        ans = prime(i);
        return ans;
    }
    //return ans;
}
*/
int main()
{
    int a,b,c;
    printf("Enter the value 1 :");
    scanf("%d",&a);
    printf("Enter the 2nd value :");
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
    if(prime(i))
        printf("%d is not prime\n",i);
    else
        printf("%d prime\n",i);
    }
}