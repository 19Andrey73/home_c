#include <stdio.h>

// Функция для сортировки массива по возрастанию (пузырьковая сортировка)
void sort_ascending(int arr[], int start, int end) {
    for (int i = start; i < end; i++) {
        for (int j = start; j < end - (i - start) - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Обмен элементов
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Функция для сортировки массива по убыванию (пузырьковая сортировка)
void sort_descending(int arr[], int start, int end) {
    for (int i = start; i < end; i++) {
        for (int j = start; j < end - (i - start) - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Обмен элементов
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    
    // Ввод массива из 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Сортировка первой половины (первые 5 элементов) по возрастанию
    sort_ascending(arr, 0, 5);
    
    // Сортировка второй половины (последние 5 элементов) по убыванию
    sort_descending(arr, 5, 10);
    
    // Вывод отсортированного массива
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
