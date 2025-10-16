#include <iostream>
#include "FibonacciSequence.h"

int FibonacciSequence(int n) {
        if (n == 0) {
                return 0;
        }
        if (n == 1) {
                return 1;
        }
        int result = FibonacciSequence(n - 1) + FibonacciSequence(n - 2);
        std::cout << result << " ";
        return result;
}