#include<stdio.h>

int main()
{
    int no;
    printf("Enter the number :");
    scanf("%d",&no);
    if(no%2==0)
        printf("It's an Even Number.");
    else
        printf("Its an odd number.");
    return 0;
}