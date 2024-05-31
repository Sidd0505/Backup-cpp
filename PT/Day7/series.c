#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i * (i * 10 + i);
        if (i < n) {
            printf("%d + ", i * (i * 10 + i));
        } else {
            printf("%d = %d\n", i * (i * 10 + i), sum);
        }
    }
    
    return 0;
}
