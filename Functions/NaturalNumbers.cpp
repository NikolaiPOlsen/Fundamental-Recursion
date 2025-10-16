#include <iostream>
#include "NaturalNumbers.h"

void printNaturalNumbers(int n) {
    // base case
    if (n == 0) {
        return;
    }
    // recursive case
    printNaturalNumbers(n - 1);
    std::cout << n << "\n";
    }