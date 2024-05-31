#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d", &age);
    if (age >= 21)
        printf("Eligible for voting.");
    else
        printf("Not eligible for voting.");
    return 0;
}