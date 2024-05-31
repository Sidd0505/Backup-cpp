//print day, month and year
/*
pass by address advantages:
return multiple values from function
make changes in actual argument.

*/
#include<stdio.h>
void calender(int *,int*,int*);

int main()
{
    int a,b,c;
    calender(&a,&b,&c);
    printf("Todays date is :%d / %d / %d",a,b,c);
    return 0;
}

void calender(int *x,int *y,int *z)
{
    printf("Enter the day: ");
    scanf("%d",x);
    printf("Enter the month: ");
    scanf("%d",y);
    printf("Enter the year: ");
    scanf("%d",z);
    

}