#include <stdio.h>
int main()
{
    int a, b;
    // a = 3 b = 4
    printf("Value of a :");
    scanf("%d", &a);
    printf("Value of b :");
    scanf("%d", &b);
    a = a + b;

    b = a - b;
    a = a - b;
    printf("%d ", a);
    printf("%d", b);
}