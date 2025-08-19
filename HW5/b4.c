#include <stdio.h>

int main() {
    int number;
    
    //printf("Enter a positive integer\n");
    scanf("%d", &number);
    
    if (number <= 0) {
        printf("Error: incorrect input!\n");
        return 1;
    }

    if (number >= 100 && number <= 999) {
        printf("YES");
    } 
    else {
        printf("NO");
    }
    
    return 0;
}
