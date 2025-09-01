#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE];
    int sum = 0;
    float average;
    // Ввод массива
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0) {
            printf("Error: incorrect input!\n");
            return 1;
        }
        
        sum += arr[i];
    }
    
    average = (float)sum / SIZE;

    printf("%.3f\n", average);
    
    return 0;
}
