#include "PowerCalculations.h"
#include <iostream>

int power(int base, int exponent) {
    if (exponent == 0 || base == 0) {
        return 1;
    }
    if (exponent % 2 == 0) {
        int result = power(base, exponent / 2);
        return result * result;
    }
    else {
        int result = power(base, exponent / 2);
        return base * result * result;
    }

}