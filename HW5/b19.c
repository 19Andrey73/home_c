
#include <stdio.h>

int main() {
    int number, sum = 0;

    scanf("%d", &number);

    if (number <= 0) {
        printf("Error: incorrect input!\n");
        return 1;
    }

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    if (sum == 10) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}
