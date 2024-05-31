#include <stdio.h>

int main()
{
    int num1, num2, num3, ans = 0, sol;
    printf("Enter the number1 :");
    scanf("%d", &num1);
    num2 = num1;
    while (num1 > 0)
    {
        ans = ans * 10 + num1 % 10;
        num1 = num1 / 10;
    }
    printf("The reverse number is :%d\n", ans);
    if (num2 == ans)
        printf("The given number %d is palindrome.", num2);
    else
        printf("The given number %d is not a palindrome.", num2);
    return 0;
}