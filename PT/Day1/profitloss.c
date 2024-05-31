#include <stdio.h>

int main()
{
    float cp, sp, tot = 0;
    printf("Enter the Cost price :");
    scanf("%f", &cp);
    printf("Enter the selling price :");
    scanf("%f", &sp);
    tot = sp - cp;
    if (tot > 0)
        printf("The business is in profit.");
    else if (tot < 0)
        printf("The business is in loss.");
    else
        printf("The business is not in profit not in loss.");
    return 0;
}