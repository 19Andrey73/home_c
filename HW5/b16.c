#include <stdio.h>

int main() {
    int num1, num2, a, b, remainder;

    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Error: incorrect input!\n");
        return 1;
    }
    
    a = num1;
    b = num2;
    
    // Алгоритм Евклида
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    
    printf("%d", a);
    
    return 0;
}
