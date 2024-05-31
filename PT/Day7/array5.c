#include<stdio.h>
int swap(int x[])
{
    x[0]=6;
    x[1]=9;
}
int main()
{
    int arr[2];
    arr[0]=9,arr[1]=6;
    swap(arr);
    printf("THe swapped numbers are : \n%d %d",arr[0],arr[1]);
}