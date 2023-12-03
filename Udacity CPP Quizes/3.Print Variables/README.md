# C++ Variable Size Printer

## Overview
This C++ program aims to practice writing to the console and learn about the different variable types available in C++. It prints the sizes of various variable types in the following order: int, short, long, char, float, double, bool. The `sizeof` operator is used to determine the size of each variable type.

## Code Explanation
The program declares variables of different types (int, short, long, char, float, double, bool) and prints their sizes using the `sizeof` operator. The `cout` statements provide information about the size of each variable type.

### Code Sample
```cpp
#include <iostream>
using namespace std;

int main() {
    int a; 
    short b;
    long c;
    char d;
    float e;
    double f;
    bool g;

    cout << "The size of integer is : " << sizeof(a) << "\n";
    cout << "The size of short is : " << sizeof(b) << "\n";
    cout << "The size of long is : " << sizeof(c) << "\n";
    cout << "The size of char is : " << sizeof(d) << "\n";
    cout << "The size of float is : " << sizeof(e) << "\n";
    cout << "The size of double is : " << sizeof(f) << "\n";
    cout << "The size of bool is : " << sizeof(g) << "\n";

    return 0;
}

