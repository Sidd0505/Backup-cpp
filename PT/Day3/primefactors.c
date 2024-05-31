#include<stdio.h>
int isprime(int n)
{
    int flag =1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag =0;
            break;
        }   
    }
    return flag;
}
void pfactors(int b)
{
    for(int i=2;i<b;i++)
    {
        if(b%i==0 && isprime(i)){
            printf("THe prime factors are %d\n",i);
        }
    }
}

int main()
{
    int num1;
    printf("Enter the number :");
    scanf("%d",&num1);
    pfactors(num1);
    return 0;
}