#include <stdio.h>
int main()
{
    int num1, ans = 1, sol = 0, i = 0;
    printf("Enter the number :");
    scanf("%d", &num1);
    i = num1 % 10;
    printf("The last digit of %d is %d\n", num1, i);
    while (num1 > 0)
    {
        ans = num1 % 10;
        num1 = num1 / 10;
    }
    printf("The first digit is :%d", ans);
    return 0;
}