#include <stdio.h>

int factorial(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    }
    
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    scanf("%d", &n);
    
    if (n < 0 && n > 20) {
        printf("Error: incorrect input!\n");
        return 1;
    }
   
    int result = factorial(n);
    printf("%d", result);
    return 0;
}
