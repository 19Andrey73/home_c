#include <stdio.h>

int calculate_positive_sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = calculate_positive_sum(arr, 10);
    printf("%d\n", sum);
    
    return 0;
}
