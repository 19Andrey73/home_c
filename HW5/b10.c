#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);

    int currentDigit;
    int lastDigit = number;
    int isAscending;
    if (number < 0) {
        number = -number;
    }
    if (number < 10) {
        printf("YES");
        return 0;
    }
    while (number > 0) {
        currentDigit = number % 10;
        if (currentDigit >= lastDigit) {
            isAscending = 0;
            break;
        }
        
        lastDigit = currentDigit;
        number /= 10;
    }
    
    if (isAscending == 0) {
        printf("NO");
    } else {
        printf("YES");
    }
    
    return 0;
}

