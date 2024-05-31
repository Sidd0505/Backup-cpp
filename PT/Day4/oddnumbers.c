#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter the number1 and number2 :");
    scanf("%d%d",&num1,&num2);
    i = num1;
    while(i<=num2)
    {
        if(i%2!=0)
            printf("The odd numbers between %d and %d is :%d\n",num1,num2,i);
        i++;
    }
    return 0;
}