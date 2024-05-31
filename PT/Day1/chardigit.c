#include<stdio.h>

int main()
{
    char num;
    printf("Enter the number :");
    scanf("%c",&num);
    if(num>='0' && num<='9')
        printf("The number is digit.");
    else
        printf("THe number is not digit.");
    return 0;
}