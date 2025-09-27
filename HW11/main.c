
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "temp_api.h"

int main(void)
{
    sensor_t info[SIZE]; 
    int number = AddInfo(info);
    
    printf("Original data:\n");
    print(info, number);
    
    printf("\nSorted by temperature:\n"); 
    SortByT(info, number);
    print(info, number);
    
    printf("\nSorted by date:\n"); 
    SortByDate(info, number); 
    print(info, number);
    
    // Вывод статистики по всем месяцам
    PrintAllMonthsStatistics(info, number);
    
    // Вывод статистики по всем годам
    PrintAllYearsStatistics(info, number);
    
    return 0;
}