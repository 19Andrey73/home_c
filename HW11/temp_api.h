#ifndef LIB_2_H
#define LIB_2_H

#include <stdlib.h>

#define SIZE 30

struct sensor {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t t;
};

typedef struct sensor sensor_t;

void AddRecord(sensor_t info[], int number,
               uint16_t year, uint8_t month, uint8_t day, 
               uint8_t hour, uint8_t minute, int8_t t);


int AddInfo(sensor_t info[]);

void print(sensor_t info[], int number);

void cgangeIJ(sensor_t info[], int i, int j);

void SortByT(sensor_t info[], int n);

int Compare(sensor_t* a, sensor_t* b);

void SortByDate(sensor_t info[], int n);

// Функция для вывода статистики по месяцу
void PrintMonthStatistics(sensor_t info[], int number, uint8_t month, uint16_t year);

// Функция для вывода статистики по году
void PrintYearStatistics(sensor_t info[], int number, uint16_t year);

// Функция для печати статистики по всем месяцам
void PrintAllMonthsStatistics(sensor_t info[], int number);

// Функция для печати статистики по всем годам
void PrintAllYearsStatistics(sensor_t info[], int number);



#endif