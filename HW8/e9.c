#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    
    // Ввод массива
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Циклический сдвиг вправо на 1
    int last = arr[SIZE - 1]; // Сохраняем последний элемент
    
    // Сдвигаем все элементы вправо
    for (int i = SIZE - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = last; // Помещаем последний элемент в начало
    
    // Вывод результата

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
