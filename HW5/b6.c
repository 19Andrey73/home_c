#include <stdio.h>

int main() {
    int number;
    
    //printf("Enter a positive integer:\n");
    scanf("%d", &number);

    //if (number <= 0) {
     //   printf("Error: incorrect input!\n");
     //   return 1;
   // }
    
    int coincidence = 0; // 0 - нет совпадений, 1 - есть совпадения
    int lastDigit = -1;   // предыдущая цифра
    
    while (number > 0) {
        int currentDigit = number % 10; // получаем последнюю цифру
        
        // проверяем, совпадает ли текущая цифра с предыдущей
        if (currentDigit == lastDigit) {
            coincidence = 1;
            break; // выходим из цикла, если нашли совпадения
        }
        
        lastDigit = currentDigit; // сохраняем текущую цифру как предыдущую
        number /= 10; // убираем последнюю цифру из числа
    }
    
    if (coincidence) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}
