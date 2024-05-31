#include <stdio.h>
/*
int count(int n)
{
    int flag=0,rem;
    while(n>0)
    {
        rem =n%10;
        flag++;
        n =n/10;
    }
    return flag;
}
*/

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    int num1, ans, sol;
    num1 = number;
    int num2 = number, num3 = number, num4 = number,num5=number,num6=number;
    int cnt = 0, rem;
    while (number > 0)
    {
        rem = number % 10;
        cnt++;
        number = number / 10;
    }
    int choice;
    switch (cnt)
    {
    case 1:
    {
        int sol = 0;
        sol = num1 * num1;
        printf("The square of the number %d is :%d", num1, sol);
        break;
    }

    case 2:
    {
        int rem = 0, sol, add = 0;
        {
            while (num2 > 0)
            {
                rem = num2 % 10;
                add += rem;
                num2 = num2 / 10;
            }
            sol = num3 - add;
            printf("The Substraction is :%d", sol);
            break;
        }
    }

    case 3:
    {
        int rem = 0, add = 0;
        while (num4 > 0)
        {
            rem = (rem * 10) + num4 % 10;
            num4 = num4 / 10;
        }
        printf("The revers of a number is %d", rem);
        break;
    }
/*
    case 4:
    {
        int rem=0,sum=0,sub;
        while(num5>0)
        {
            rem = num5%10;
            sum+ = rem;
            num5 = num5/10;
        }
        sub = num6%sum;
        printf("The modulus operator output is %d",sub);
        break;
    }
*/
    default :
    {
        int rem=0,sum=0,sub;
        while(num5>0)
        {
            rem = num5%10;
            sum = sum+rem;
            num5 = num5/10;
        }
        sub = num6%sum;
        printf("The modulus operator output is %d",sub);
        break;  
    }
    }
}
