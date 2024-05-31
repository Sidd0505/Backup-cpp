#include<stdio.h>
#include"header.h"
int main()
{
    int arr[4];
    int size =4;
    int target;
    printf("Enter 4 array elements\n");
    scanf("%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3]);
    printf("Enter the element you want to search :");
    scanf("%d",&target);
    printf("The intended index is :%d",findcoin(arr,size,target));
    return 0;
}