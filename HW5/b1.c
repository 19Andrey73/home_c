#include <stdio.h>

int main() {
    int n;
    //printf("Enter a natural number (no more than 100)\n");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Error! The number must be natural and must not exceed 100.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    
    return 0;
    }
