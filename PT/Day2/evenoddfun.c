#include<stdio.h>

int evenodd(int n)
{
    int tot;
    if(n%2==0)
    {
        return 1;
    }
    else 
        return 0;
}
int main()
{
    int num,a;
    printf("Enter the number :");
    scanf("%d",&num);
    if(evenodd(num))
        printf("The number is even.");
    else
        printf("THe number is odd.");
}
