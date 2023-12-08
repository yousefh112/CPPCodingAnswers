```plaintext
# Linear Search Algorithm

## Problem Description

You are given an array of integers. Implement a simple linear search algorithm to find the index of a given key in the array.

## Functionality

The provided C++ program includes a `LinearSearch` function and a `main` function.

- The `LinearSearch` function takes an array of integers and a key as parameters. It iterates through the array to find the index of the key and prints the result.
- The `main` function initializes an array with predefined values, prompts the user to enter a key, and calls the `LinearSearch` function.

## Instructions

1. Compile and run the program.
2. Enter an integer when prompted to input the key.
3. The program will output the index of the key if found; otherwise, it will indicate that the key was not found.

## Example

### Input
```
Please enter the element you want to find:
30
```

### Output
```
The key value found at index 5
```

## Notes

This example demonstrates the linear search algorithm's functionality to find the index of the key `30` in the predefined array.

```
array<int, 10> list = {1, 5, 6, 7, 8, 30, 89, 3, 9, 16};
```
```
Please enter the element you want to find:
30
```
```
The key value found at index 5
```
```