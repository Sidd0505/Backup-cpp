#include<stdio.h>
// int factors(int n)
// {
//     int ans;
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//             printf("Factors are %d\n",i);
//     }
// }
// int compare(int n1,int n2)
// {
//     int ans;
//     factors(n1);
//     factors(n2);

// }
// int main()
// {
//     int num1,num2,ans,sol;
//     printf("Enter the num1 :");
//     scanf("%d",&num1);
//     printf("Enter the num2 :");
//     scanf("%d",&num2);
//     factors(num1);
//     factors(num2);
// }

int main()
{
    int num1,num2,ans;
     //int num1,num2,ans,sol;
    printf("Enter the num1 :");
    scanf("%d",&num1);
    printf("Enter the num2 :");
    scanf("%d",&num2);
    for(int i=2;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
            printf("The HCF is :%d\n",i);
    }

}
