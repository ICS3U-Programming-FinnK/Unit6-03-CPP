// Created by: Finn Kitor
// Created on: December 14th, 2023
// this program generates 10 numbers between 0 to 100 and it finds the minimum value of the array.
#include <time.h>

#include <array>
#include <iostream>

// Constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

/**
 * Finds the minimum value in an array using a For..In loop.
 *
 * @param arr The array of integers.
 * @return int The minimum value in the array.
 */
int findMinValue(const std::array<int, MAX_ARRAY_SIZE>& arr) {
    int minValue = arr[0];  // Initialize minValue with the first element of the array

    // Iterate through the array using a For..In loop
    for (int num : arr) {
        if (num < minValue) {
            minValue = num;
        }
    }

    return minValue;
}

int main() {
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // Generate random numbers and store them in the array
    srand(time(NULL));
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        arrayOfInt[i] = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
    }

    // Print the generated numbers
    std::cout << "Generated numbers: ";
    for (int num : arrayOfInt) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Find the minimum value in the array
    int minValue = findMinValue(arrayOfInt);

    // Print the minimum value
    std::cout << "Minimum value: " << minValue << std::endl;

    return 0;
}