#include<stdio.h>

int main()
{
    char sec;
    printf("Give the character :");
    scanf("%c",&sec);
    if(sec>=65 && sec<=90)
    {
        sec += 32;
        printf("%c\n",sec);
    }
    else if(sec>=97 && sec<=122)
    {
        sec -= 32;
        printf("%c\n",sec);
    }
    else
        printf("Enter valid character.");
        return 0;

}