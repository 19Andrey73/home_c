#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if (number <= 0) {
        printf("Error: incorrect input!");
        return 1;
    }
    
    int minDigit = 9;
    int maxDigit = 0;
    int temp = number;

    if (temp < 10) {
        minDigit = temp;
        maxDigit = temp;
    } else {
        
        while (temp > 0) {
            int digit = temp % 10;
            
            if (digit < minDigit) {
                minDigit = digit;
            }
            if (digit > maxDigit) {
                maxDigit = digit;
            }
            
            temp /= 10;
        }
    }
    printf("%d %d", minDigit, maxDigit);
    
    return 0;
    }
