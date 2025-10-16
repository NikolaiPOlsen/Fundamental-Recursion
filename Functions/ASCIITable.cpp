#include <iostream>
#include "ASCIITable.h"

void traverseAsciiTable(char start, char end) {
    if (start == end) {
        return;
    }
    std::cout << start << " : " << start << "\n";
    traverseAsciiTable(static_cast<char>(start + 1), end);
    std::cout << start << " : " << start << "\n";
}