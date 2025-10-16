#include <iostream>
#include "CountOccurrences.h"

int CountOccurrences(std::string s, char c) {
    if (s.empty()) {
        return 0;
    }
    return (s[0] == c ? 1 : 0) + CountOccurrences(s.substr(1), c);
}