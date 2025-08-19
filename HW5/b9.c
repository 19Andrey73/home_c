#include <stdio.h>

int main() {
    int number;
    
    //printf("Enter an integer: ");
    scanf("%d", &number);

    int allEven = 1; // Предполагаем, что все цифры четные

    while (number > 0) {
        int digit = number % 10; // Получаем последнюю цифру
        
        if (digit % 2 != 0) {
            allEven = 0; // Нашли нечетную цифру
            break; // Прерываем цикл, так как уже нашли нечетную цифру
        }
        
        number /= 10; // Убираем последнюю цифру
    }
    
    if (allEven) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}
