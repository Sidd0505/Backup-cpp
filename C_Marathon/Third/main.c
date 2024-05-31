#include <stdio.h>
#include "header.h"
int main()
{
    int num1;
    printf("Enter the number :");
    scanf("%d", &num1);
    {
        int ans;
        ans = count(num1);
        switch (ans)
        {
        case 1:                 //case 1 of switch case
        {
            multiplication(num1);
            break;
        }

        case 2:                 //case 2 of switch case
        {
            substract(num1);
            break;
        }

        case 3:                 // case 3 of switch case
        {
            reverse(num1);
            break;
        }

        default:                //default case of switch case
        {
            mod(num1);
            break;
        }
        }
    }
}
