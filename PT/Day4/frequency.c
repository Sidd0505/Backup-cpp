#include <stdio.h>
int main()
{
    int num1, num2, num3, ans, sol, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0;
    printf("Enter the number :");
    scanf("%d", &num1);
    while (num1 > 0)
    {
        num2 = num1 % 10;
        num1 = num1 / 10;
        if (num2 == 0)
            a++;
        else if (num2 == 1)
            b++;
        else if (num2 == 2)
            c++;
        else if (num2 == 3)
            d++;
        else if (num2 == 4)
            e++;
        else if (num2 == 5)
            f++;
        else if (num2 == 6)
            g++;
        else if (num2 == 7)
            h++;
        else if (num2 == 8)
            i++;
        else
            j++;
    }
printf("The digit 0 apperars : %d times\n",a);
printf("The digit 1 apperars : %d times\n",b);
printf("The digit 2 apperars : %d times\n",c);
printf("The digit 3 apperars : %d times\n",d);
printf("The digit 4 apperars : %d times\n",e);
printf("The digit 5 apperars : %d times\n",f);
printf("The digit 6 apperars : %d times\n",g);
printf("The digit 7 apperars : %d times\n",h);
printf("The digit 8 apperars : %d times\n",i);
printf("The digit 9 apperars : %d times\n",j);
}