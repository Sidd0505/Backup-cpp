#include<stdlib.h>

int main()
{
     int id = fork();

     if(id == 0){
        printf("THis statement is printed in the child ");
        printf("Process ID :%d and my parent's ID is :%d", getid(), getppid());
          }
    else
    {
        printf("This comes from the parent");
        printf("Process ID :%d and my parent's ID is :%d", getid(), getppid());
    }
}