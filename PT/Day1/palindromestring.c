#include<stdio.h>
#include<string.h>
#include<ctype.h>

int ispalindrome(const char *str)
{
    int left = 0;
    int right = (strlen(str))-1;

    while(left<right)
    {
        if(str[left] != str[right])
            return 0;
        else{
            left++;
            right--;
        }
        return 1;
    }

}

int main()
{
    char arr[100];
    printf("Enter your string :");
    scanf("%s",arr);
    if(ispalindrome(arr))
        printf("THe string is palindrome");
    else
        printf("THe string is not palindrome.");
}