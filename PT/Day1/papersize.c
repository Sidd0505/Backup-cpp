#include<stdio.h>
int main()
{
    int side1 = 1189;
    int side2 = 841;
    printf("The side 1 is :%d",side1);
    printf("The side 2 is :%d",side2);
    for(int i=1;i<=9;i++)
    {
        if(side1>side2)
        {
            side1 = side1/2;
            printf("%d  The new side 1 is %d\n",i,side1);
            printf("The side 2 is as it is %d\n",side2);
        }
        else
        {
            side2 = side2/2;
            printf("Side 1 is as it is %d\n",side1);
            printf("%d The new side2 is %d\n",i,side2);
        }
    }
    return 0;
}