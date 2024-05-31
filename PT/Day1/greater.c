#include<stdio.h>
void greater(int a, int b, int c)
{
     if(a>b && a>c)
        printf("A is greater.");
    else if(b>c)
        printf("B is greater.");
    else
        printf("C is greater.");
}

int main()
{
    int a,b,c;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);
    greater(a,b,c);
    return 0;
}