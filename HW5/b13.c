#include <stdio.h>

int main() {
    long number;
    int even_count = 0, odd_count = 0;

    scanf("%ld", &number);

    if (number < 0) {
        printf("Error: incorrect input!");
        return 1;
    }

    if (number == 0) {
        even_count = 1;
    } else {

       long temp = number;
        while (temp > 0) {
            int digit = temp % 10; 
            if (digit % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
            temp /= 10;
        }
    }

    printf("%d %d", even_count, odd_count);
    
    return 0;
}
