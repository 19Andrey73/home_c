#include <stdio.h>

int main() {
    int number, sum = 0, digit;
    
    //printf("Enter a number (>= 0)\n");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error: incorrect input!\n");
        return 1;
    }
    
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    
    printf("%d", sum);
    return 0;
}

