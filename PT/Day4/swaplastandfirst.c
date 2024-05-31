#include<math.h>
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int num,swappednum;
    int firstdigit,lastdigit, digits;
    printf("ENter the number :");
    scanf("%d",&num);
    
    lastdigit = num%10;  //last digit bhetla

    digits = (int)(log10(num)); //total no of digits -1 

    firstdigit = (int) (num/pow(10,digits));  //obtain first digit

    swappednum = lastdigit;   
    swappednum *= (int) pow(10,digits);    //last digit la first digit kela
    swappednum += num % (int) (pow(10,digits)); // adding remainder
    swappednum -= lastdigit; //minus
    swappednum +=firstdigit;  //plus

    printf("The original number is :%d\n",num);
    printf("The swapped number is :%d",swappednum);
    return 0;
}