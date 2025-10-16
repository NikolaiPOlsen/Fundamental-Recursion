#include "CalculateFactorial.h"
#include <iostream>

int calculateFactorial(int n) {
    // base case
    if (n == 0 || n == 1) {
        return 1;
    }
    // recursive call
    return n * calculateFactorial(n - 1);
}