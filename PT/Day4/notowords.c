#include<stdio.h>
int main()
{
    int num1,num2;
     char name[20],a[20];
    printf("Enter the number :");
    scanf("%s",&name);
   
    for(int i=0;i<strlen(name);i++){
        if(name[i]=='1'){
            printf("one");p
        }
        if(name[i]=='2'){
            printf("two");
        }
        if(name[i]=='3'){
            printf("three");
        }
        if(name[i]=='4'){
            printf("four");
        }
        if(name[i]=='5'){
            printf("five");
        }
        if(name[i]=='6'){
            printf("six");
        }
        if(name[i]=='7'){
            printf("seven");
        }
        if(name[i]=='8'){
            printf("eight");
        }
        if(name[i]=='9'){
            printf("nine");
        }
        if(name[i]=='0'){
            printf("zero");
        }
        printf("\t");
    }
    return 0;
}