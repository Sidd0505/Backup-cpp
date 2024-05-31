#include<stdio.h>
int addmult(int,int);
int main()
{
    int i=3,j=4,k,z;
    k =addmult(i,j);
    z = addmult(i,j);
    printf("%d%d\n",k,z);
    return 0;
}
int addmult(int x,int y)
{
    int u,v;
    u = x+y;
    v =x*y;
    return(u,v);
}