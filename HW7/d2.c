#include <stdio.h>

int sum_to_n(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return n + sum_to_n(n - 1);
    }
}

int main() {
    int n;

    scanf("%d", &n);
    
    int result = sum_to_n(n);
    printf("%d ", result);
    
    return 0;
}
