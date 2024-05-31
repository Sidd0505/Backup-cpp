#include<stdio.h>
int main()
{
    
    float temp,cel;
    printf("Enter the temperature of city in farenheit :");
    scanf("%f",&temp);
    cel = (temp-32)*5/9;
    printf("The temperature in degree is :%f",cel);
    return 0;
    
}