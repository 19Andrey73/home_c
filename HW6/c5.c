#include <stdio.h>

int sumn(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int number;

    scanf("%d", &number);
    
    if (number <= 0) {
        printf("Error: incorrect input!\n");
        return 1;
    }

    int result = sumn(number);
    printf("%d", result);
    
      return 0;
}
