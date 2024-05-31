#include<stdio.h>

int fibo(int n)
{
    if(n==1 || n==0)
        return n;
    else{
        return (fibo(n-1)+ fibo(n-2));
    }
}

int main()
{
    int num;
    printf("Enter the index you want :");
    scanf("%d",&num);
    //fibo(num);
    printf("%d\n",fibo(num));
}