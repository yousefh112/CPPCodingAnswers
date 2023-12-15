
# Array Reversal Program

## Overview
This C++ program demonstrates a simple way to reverse and print an array of integers. The program takes the size of the array as input, followed by the array elements. It then prints the array elements in reverse order.

## How to Use
1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Enter the number of integers (`N`) as the first input.
4. Enter the space-separated array elements as the second input.
5. View the reversed array elements printed to the console.

## Array Declaration
Arrays are declared using the syntax:
```cpp
int arr[10]; // Declares an array named arr of size 10
```
For dynamic allocation, you can use:
```cpp
int* arr = new int[N]; // Creates an array with space for N integers
```

## Accessing Elements
Array elements are accessed using indexing, starting from 0. For example:
```cpp
arr[0] // Accesses the first element
```

## Input Format
- The first line of input contains an integer `N`, representing the number of integers in the array.
- The second line contains `N` space-separated integers.

## Output Format
- The program prints the `N` integers of the array in reverse order, space-separated on a single line.

## Example
### Input
```
4
1 4 3 2
```
### Output
```
2 3 4 1
```

In this example, the program takes an array of 4 integers (1, 4, 3, 2) and prints them in reverse order.
```

This README provides an overview of the program's purpose, functionality, and instructions on how to use it. It also includes information about array declaration, accessing elements, input format, output format, and an example with expected output.