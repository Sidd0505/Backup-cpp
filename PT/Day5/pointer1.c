#include<stdio.h>
//ui#define n 5
void display(int [],int);
void calavg(int *,int);
int main()
{
    int m[5]={1,2,3,4,5};
    calavg(m,5);

}
void calavg(int *p, int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + p[i];
    }

float avg = (float) sum/n;

printf("The average is :%f",avg);

}
