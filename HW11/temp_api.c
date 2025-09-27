#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "temp_api.h"



void AddRecord(sensor_t info[], int number,
               uint16_t year, uint8_t month, uint8_t day, 
               uint8_t hour, uint8_t minute, int8_t t)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hour = hour;
    info[number].minute = minute;
    info[number].t = t;
}

int AddInfo(sensor_t info[])
{
    int counter = 0;  
    AddRecord(info, counter++, 2024, 9, 16, 22, 33, 9);
    AddRecord(info, counter++, 2024, 9, 2, 17, 16, -9);
    AddRecord(info, counter++, 2024, 1, 7, 11, 14, 8);
    AddRecord(info, counter++, 2024, 9, 5, 23, 58, 1);
    AddRecord(info, counter++, 2024, 1, 15, 10, 30, -5);
    AddRecord(info, counter++, 2024, 2, 20, 14, 25, 12);
    AddRecord(info, counter++, 2025, 2, 10, 8, 45, 7);
    return counter;
}

void print(sensor_t info[], int number)
{
    printf("===================================\n");        
    for(int i = 0; i < number; i++)
        printf("%04d-%02d-%02d %02d:%02d t=%3d\n",    
            info[i].year,
            info[i].month,
            info[i].day,
            info[i].hour,
            info[i].minute,
            info[i].t
        );
}

void cgangeIJ(sensor_t info[], int i, int j)
{
    sensor_t temp;
    temp = info[i];
    info[i] = info[j];
    info[j] = temp;   
}

void SortByT(sensor_t info[], int n)
{
    for(int i = 0; i < n; ++i)
        for(int j = i; j < n; ++j)
            if(info[i].t >= info[j].t)
                cgangeIJ(info, i, j);
}

int Compare(sensor_t* a, sensor_t* b)
{
    if(a->year != b->year)
        return a->year - b->year;
    else if (a->month != b->month)
        return a->month - b->month;
    else if (a->day != b->day) 
        return a->day - b->day; 
    else if (a->hour != b->hour)
        return a->hour - b->hour; 
    else   
        return a->minute - b->minute;     
}   

void SortByDate(sensor_t info[], int n)
{
    for(int i = 0; i < n; ++i)
        for(int j = i; j < n; ++j)          
            if(Compare(info + i, &info[j]) > 0)
                cgangeIJ(info, i, j);            
}

// Функция для вывода статистики по месяцу
void PrintMonthStatistics(sensor_t info[], int number, uint8_t month, uint16_t year)
{
    int count = 0;
    int sum = 0;
    int8_t min_temp = 127;
    int8_t max_temp = -128;
    
    for(int i = 0; i < number; i++)
    {
        if(info[i].month == month && info[i].year == year)
        {
            sum += info[i].t;
            count++;
            
            if(info[i].t < min_temp)
                min_temp = info[i].t;
                
            if(info[i].t > max_temp)
                max_temp = info[i].t;
        }
    }
    
    if(count > 0)
    {
        float avg_temp = (float)sum / count;
        printf("\nStatistics %02d/%04d:\n", month, year);
        printf("Monthly average temp: %.2f C\n", avg_temp);
        printf("Monthly min temp: %d C\n", min_temp);
        printf("Monthly max temp: %d C\n", max_temp);
        printf("Records count: %d\n", count);
    }
    else
    {
        printf("\nNo data available for %02d/%04d\n", month, year);
    }
}

// Функция для вывода статистики по году
void PrintYearStatistics(sensor_t info[], int number, uint16_t year)
{
    int count = 0;
    int sum = 0;
    int8_t min_temp = 127;
    int8_t max_temp = -128;
    
    for(int i = 0; i < number; i++)
    {
        if(info[i].year == year)
        {
            sum += info[i].t;
            count++;
            
            if(info[i].t < min_temp)
                min_temp = info[i].t;
                
            if(info[i].t > max_temp)
                max_temp = info[i].t;
        }
    }
    
    if(count > 0)
    {
        float avg_temp = (float)sum / count;
        printf("\nStatistics for year %04d:\n", year);
        printf("Yearly average temp: %.2f C\n", avg_temp);
        printf("Yearly min temp: %d C\n", min_temp);
        printf("Yearly max temp: %d C\n", max_temp);
        printf("Records count: %d\n", count);
    }
    else
    {
        printf("\nNo data available for year %04d\n", year);
    }
}

// Функция для печати статистики по всем месяцам
void PrintAllMonthsStatistics(sensor_t info[], int number)
{
    printf("\n=== STATISTICS FOR ALL MONTHS ===\n");
    
    // Создаем массив для отслеживания обработанных месяцев
    int processed[12][3000] = {0}; // [month][year]
    
    for(int i = 0; i < number; i++)
    {
        uint8_t month = info[i].month;
        uint16_t year = info[i].year;
        
        // Если месяц еще не обработан
        if(!processed[month-1][year])
        {
            PrintMonthStatistics(info, number, month, year);
            processed[month-1][year] = 1; // Помечаем как обработанный
        }
    }
}

// Функция для печати статистики по всем годам
void PrintAllYearsStatistics(sensor_t info[], int number)
{
    printf("\n=== STATISTICS FOR ALL YEARS ===\n");
    
    // Создаем массив для отслеживания обработанных годов
    int processed[3000] = {0}; // [year]
    
    for(int i = 0; i < number; i++)
    {
        uint16_t year = info[i].year;
        
        // Если год еще не обработан
        if(!processed[year])
        {
            PrintYearStatistics(info, number, year);
            processed[year] = 1; // Помечаем как обработанный
        }
    }
}

