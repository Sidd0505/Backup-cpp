#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = NULL;
    int n;
    printf("Number of students: ");
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));
    int m;
    for(int i=0;i<n;i++)
    {
      scanf("%d",&p[i]);


    }
    /*
    printf("THe total is :%d",tot);
    free(p);
    printf("The total is %d",tot);
    return 0;
    */
}