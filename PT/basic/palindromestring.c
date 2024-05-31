#include <stdio.h>
#include <stdbool.h>
#include <string.h>
 
// Function to check if a string is a palindrome
int isPalindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;
 
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // If characters at the current positions don't match, it's not a palindrome
        }
        left++;
        right--;
    }
    return 1; // If the loop completes without returning 0, it's a palindrome
}
int main() {
    char input[100]; // Adjust the array size as needed for your input
    printf("Enter a string: ");
    scanf("%s", input);
 
    if (isPalindrome(input)) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }
 
    return 0;
}