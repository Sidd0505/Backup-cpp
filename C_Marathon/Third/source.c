#include <stdio.h>
#include "header.h"
int count(int n)                //to count the digits
{
    int flag = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        flag++;
        n = n / 10;
    }
    return flag;
}

int multiplication(int n)       //multiplication
{
    int total;
    total = n * n;
    printf("The input has 1 digit so the multiplication is %d", total);
}

int substract(int n)        //substraction
{
    int rem = 0, sol = 0, add = 0, num2 = n;
    {
        while (n > 0)
        {
            rem = n % 10;
            add += rem;
            n = n / 10;
        }
        sol = num2 - add;
        printf("The input has 2 digits so the Substraction is :%d", sol);
    }
}

int reverse(int n)              //Reverse code
{
    int rem = 0, add = 0;
    while (n > 0)
    {
        rem = (rem * 10) + n % 10;
        n = n / 10;
    }
    printf("The input has 3 digits so the reverse of a number is %d", rem);
}

int mod(int n)              //modulus operator code
{
    int rem = 0, sum = 0, sub = 0, num2 = n, cnt = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        cnt++;
        n = n / 10;
    }
    sub = num2 % sum;
    printf("The input has %d digits so modulus operator output is %d", cnt, sub);
}