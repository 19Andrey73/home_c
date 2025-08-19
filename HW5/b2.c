#include <stdio.h>

int main() {
    int a, b;

    //printf("Enter two integers a and b (a ≤ b)\n");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Error: a must be less than or equal to b!\n");
        return 1;
    }

    for (int i = a; i <= b; i++) {
        printf("%d ", i * i);
    }
    
    return 0;
}
