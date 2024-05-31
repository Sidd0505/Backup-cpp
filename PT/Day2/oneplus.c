#include<stdio.h>
int main()
{
    int long cnt,n,ans, num1 =1,rem=1,add=1;
    printf("How many times do you want to add :");
    scanf("%ld",&n);
    while(n>1)
    {
        rem = (rem*10+1);
        add = add+rem;
        n--;
    }
    printf("The sum is :%ld",add);
}