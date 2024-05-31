#include<stdio.h>
//458 = 4+5+8
int main()
{
    int num,add=0,rem=0;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        num = num/10;
        add = add+rem;
    }
    printf("The sum of digits is %d",add);
}