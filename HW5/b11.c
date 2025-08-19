#include <stdio.h>

int main() {
    int number, reversed = 0;

    scanf("%d", &number);

    if (number < 0) {
        printf("Error: incorrect input!\n");
      return 1;
    }

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    
    
    printf("%d", reversed);
    
    return 0;
}

