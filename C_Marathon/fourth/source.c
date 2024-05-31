#include<stdio.h>
#include"header.h"
#include<stdlib.h>

void accept(struct symboldecoder *s,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the symbols :");
        getchar();
        scanf("%c",&s[i].symbol);
        printf("Enter the numeric value :");
        scanf("%d",&s[i].value);
    }
}

int search(struct symboldecoder *s,int n)
{
    char sid;
    printf("Enter a character :");
    getchar();
    scanf("%c",&sid);
    for(int j=0;j<n;j++)
    {
        if(sid == s[j].symbol)
        {
            printf("\n%c symbol found\n",s[j].symbol);
            printf("\n%d is the numeric value of this symbol\n",s[j].value);
        }
        else 
            return -1;
    }
}