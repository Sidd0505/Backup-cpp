#include<stdio.h>
int main()
{
   int x =4,y,z;
   y = --x;
   printf("%d x value\n",x);
   z = x--;
   printf("%d%d%d\n",x,y,z);
    printf("%d\n",x);
    return 0;
}