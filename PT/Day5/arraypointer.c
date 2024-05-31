//Display function 

#include<stdio.h>

void display(int [],int);
//void calavg(int *,int);
int main()
{
    int m[5]={1,2,3,4,5};
    display(m,5);

}
void display(int k[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        printf("The element %d value is :%d\n",i+1,*(k+i));
      printf("The element %d value is :%d\n",i+1,k[i]);
      printf("The element %d value is :%d\n",i+1,i[k]);
       // printf("THe size of pointer k is :%d",sizeof(k));
    }
}
