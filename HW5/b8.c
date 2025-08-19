#include <stdio.h>

int main() {
    int number, sum = 0, digit, a;
    scanf("%d", &number);
    
    while (number > 0) {
        digit = number % 10;
        if (digit == 9) {
           sum += digit;
     }
        number /= 10;
    }
        a = sum/9;
     if (a == 1) {
        printf("YES");
    } 
    else {
        printf("NO");
    } 
   
    return 0;
}

