#include <stdio.h>

int main() {
    int number;
    int count = 0;

    scanf("%d", &number);
    
    while (number != 0) {

        if (number % 2 == 0) {
            count++;
        }

        scanf("%d", &number);
    }
    
    printf("%d", count);
    
    return 0;
}
