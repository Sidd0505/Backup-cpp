#include <stdio.h>
int main()
{
    int num1, a, b=0, c;
    printf("Enter the number :");
    scanf("%d", &num1);
    for(int i=1;i<num1;i++)
    {
        c = num1 %i;
        if(c==0)
        {
            b = b+i;
        }
    }
    if(num1 == b)
        printf("It is a perfect number.");
    else
        printf("It is not a perfect number.");
}