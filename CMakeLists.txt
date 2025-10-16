cmake_minimum_required(VERSION 4.0)
project(FundamentalRecusion)

set(CMAKE_CXX_STANDARD 17)

add_executable(FundamentalRecusion main.cpp
        Functions/NaturalNumbers.cpp
        Functions/NaturalNumbers.h
        Functions/CalculateFactorial.cpp
        Functions/CalculateFactorial.h
        Functions/PowerCalculations.cpp
        Functions/PowerCalculations.h
        Functions/FibonacciSequence.cpp
        Functions/FibonacciSequence.h
        Functions/CountOccurrences.cpp
        Functions/CountOccurrences.h
        Functions/LargestElement.cpp
        Functions/LargestElement.h
        Functions/ASCIITable.cpp
        Functions/ASCIITable.h
)
