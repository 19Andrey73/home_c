#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);
    if (month == 12 || month == 1 || month == 2) {
        printf("winter");
    } 
    else if (month >= 3 && month <= 5) {
        printf("spring");
    } 
    else if (month >= 6 && month <= 8) {
        printf("summer");
    } 
    else {
        printf("autumn");
    }
    
    return 0;
}

