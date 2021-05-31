#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define ARRAY_SIZE 5

int main(int argc, char *argv[]) {
    int numbers[ARRAY_SIZE] = { 17, 32, 12, 0, 7 }, 
        copiedArray[ARRAY_SIZE] = { 0 }, 
        sortedArray[ARRAY_SIZE] = { 0 }, 
        sum = 0;
    float avergage = 0.0;

    sum = getSum(numbers, ARRAY_SIZE);
    avergage = getAverage(numbers, ARRAY_SIZE);

    printf("Initial array:\n");
    printArray(numbers, ARRAY_SIZE);

    copyArray(numbers, copiedArray, ARRAY_SIZE);

    printf("Copied array:\n");
    printArray(copiedArray, ARRAY_SIZE);

    printf("Now, replace each higher value than 15:\n");
    limitArray(copiedArray, ARRAY_SIZE, 15);
    printArray(copiedArray, ARRAY_SIZE);

    printf("Sort the array:\n");
    printf("From: ");
    printArray(numbers, ARRAY_SIZE);
    sort(numbers, ARRAY_SIZE);
    printf("To: ");
    printArray(numbers, ARRAY_SIZE);

    printf("The sum is %d\n", sum); // 68
    printf("The average is %f\n", avergage); // 13.6

    return 0;
}

void sort(int array[], int arraySize) {
    int swapped = 0, a = 0, b = 0;

    do {
        swapped = 0;

        for (int i = 0; i < arraySize - 1; i++) {
            a = array[i];
            b = array[i + 1];

            if (a > b) {
                *(array + i) = b;
                *(array + i + 1) = a;
                swapped = 1;
            }
        }
    } while (swapped);
}

void limitArray(int array[], int arraySize, int max) {
    for (int i = 0; i < arraySize; i++) {
        if (array[i] > max) {
            *(array + i) = 0;
        }
    }
}

void printArray(int array[], int arraySize) {
    printf("Print array: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d,", array[i]);
    }
    printf("\n");
}

void copyArray(int initialArray[], int newArray[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        *(newArray + i) += initialArray[i];
    }
}

int getSum(int numbersToSum[], int arraySize) {
    int result = 0;
    for (int i = 0; i < arraySize; i++) {
        result += numbersToSum[i];
    }
    return result;
}

float getAverage(int numbersToSum[], int arraySize) {
    return getSum(numbersToSum, arraySize) / arraySize;
}