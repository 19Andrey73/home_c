#include <stdio.h>

int main() {
    int number;
    int count = 0;
    
    while (1) {
        scanf("%d", &number);
        
        if (number == 0) {
            break;
        }
        
        count++;
    }
    
    printf("%d", count);
    
    return 0;
}
