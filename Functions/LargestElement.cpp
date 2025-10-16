#include <iostream>
#include "LargestElement.h"

int findLargestElement(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    int mid = size / 2;
    return std::max(findLargestElement(arr, mid), findLargestElement(arr + mid, size - mid));
}