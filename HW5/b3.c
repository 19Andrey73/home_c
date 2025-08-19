#include <stdio.h>

int main() {
    int a, b, sum = 0;

    //printf("Enter two integers a and b (a <= b, a <= 100, b <= 100)\n");
    scanf("%d %d", &a, &b);

    if (a > 100 || b > 100 || a > b) {
        printf("Error: incorrect input!\n");
        return 1;
    }

    for (int i = a; i <= b; i++) {
        sum += i * i;
    }

    printf("%d", sum);
    
    return 0;
}
