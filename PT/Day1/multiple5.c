#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    if (num % 5 == 0)
        printf("The number is multiple of 5.");
    else
        printf("The number is not a multiple of 5.");
    return 0;
}