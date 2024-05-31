#include<stdio.h>
int main()
{
    int side1,side2,rad,p1,p2;
    printf("Enter the side 1 and side 2 and radius of rectangle and circle respectively :");
    scanf("%d%d%d",&side1,&side2,&rad);
    p1 = 2*(side1+side2);
    printf("Perimeter of the rectangle is :%d",p1);
    p2 = (2*22*rad)/7;
    printf("The perimeter of the circle is :%d",p2);
    return 0;
}