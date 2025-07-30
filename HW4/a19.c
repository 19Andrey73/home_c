#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
        printf("YES");
    } 
    else {
        printf("NO");
    }
    return 0;
}

