#include <stdio.h>

int sum_digits(int n) {

    if (n < 10) {
        return n;
    }
  
    return n % 10 + sum_digits(n / 10);
}

int main() {
    
    int n;

    scanf("%d", &n);
    
    if (n < 0) {
        printf("ОError: incorrect input!\n");
        return 1;
    }
    
    printf("%d", sum_digits(n));
    
    return 0;
}
