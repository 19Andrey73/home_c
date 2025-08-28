#include <stdio.h>

void print_numbers_reverse(int n) {
    if (n > 0) {
        printf("%d ", n);
        print_numbers_reverse(n - 1);
    }
}

int main() {
    int n;

    scanf("%d", &n);

    print_numbers_reverse(n);
    printf(" ");
    
    return 0;
}
