#include <iostream>
#include "Functions/NaturalNumbers.h"
#include "Functions/CalculateFactorial.h"
#include "Functions/FibonacciSequence.h"
#include "Functions/PowerCalculations.h"
#include "Functions/CountOccurrences.h"
#include "Functions/LargestElement.h"
#include "Functions/ASCIITable.h"

int main() {
    int choice;

    std::cout << "Menu:\n"
                << "1. Print natural numbers\n"
                << "2. Calculate factorial\n"
                << "3. Power calculations\n"
                << "4. Fibonacci sequence\n"
                << "5. Count occurrences of a character string\n"
                << "6. Larges element in an array\n"
                << "7. ASCII table traversal\n"
                << "Enter your choice: ";
    std::cin >> choice;

    while (true) {
        switch (choice) {
            case 1: {
                int n;
                std::cout << "Enter the last number you want: ";
                std::cin >> n;
                printNaturalNumbers(n);
                break;
            }
            case 2: {
                int n;
                std::cout << "Enter a number to calculate its factorial: ";
                std::cin >> n;
                int result = calculateFactorial(n);
                std::cout << result << "\n";
                break;
            }
            case 3: {
                int base, exponent;
                std::cout << "Enter base: ";
                std::cin >> base;
                std::cout << "Enter exponent: ";
                std::cin >> exponent;
                int result = power(base, exponent);
                std::cout << result << "\n";
                break;
            }
            case 4: {
                int n;
                std::cout << "Enter the number of terms in Fibonacci sequence: ";
                std::cin >> n;
                int result = FibonacciSequence(n);
                std::cout << "\n" << result << "\n";
                break;
            }
            case 5: {
                std::string s;
                char c;
                std::cout << "Enter a string: ";
                std::cin >> s;
                std::cout << "Enter a character to count its occurrences: ";
                std::cin >> c;
                int result = CountOccurrences(s, c);
                std::cout << "Occurrences of " << c << ": " << result << "\n";
                break;
            }
            case 6: {
                int size;
                std::cout << "Enter the size of the array: ";
                std::cin >> size;
                int* arr = new int[size];
                std::cout << "Enter the elements of the array:\n";
                for (int i = 0; i < size; ++i) {
                    std::cin >> arr[i];
                }
                int result = findLargestElement(arr, size);
                std::cout << "Largest element: " << result << "\n";
                delete[] arr;
                break;
            }
            case 7: {
                char start, end;
                std::cout << "Enter the start and end characters (ASCII values): ";
                std::cin >> start >> end;
                traverseAsciiTable(start, end);
                break;
            }
            default: {
                std::cout << "Invalid choice\n";
                break;
            }
        }
    }
    return 0;
}