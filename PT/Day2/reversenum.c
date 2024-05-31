#include<stdio.h>

int main()
{
    int num1;
    printf("Enter the number :");
    scanf("%d",&num1);
    for(int i=num1;num1!=0;i++)
    {
            i = num1%10;
            
            num1 = num1/10;

            printf("%d",i);
    }
    printf("\n");
}