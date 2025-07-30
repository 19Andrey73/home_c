#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d%d", &num1 , &num2);
    if (num1 > num2) {
        printf("Above");
    } 
    else if (num1 < num2) {
        printf("Less");
    } 
    else {
        printf("Equal");
    }
    
    return 0;
}
