

# Binary Search Example

## Overview
This C++ program demonstrates the implementation of the binary search algorithm. The binary search is applied to find a desired element in a sorted array.

## Features
- **Binary Search Function (`BinarySearch`):**
  - Parameters:
    - `arr`: An array of integers where the binary search will be performed.
    - `left`: The left index of the current search range.
    - `right`: The right index of the current search range.
    - `key`: The value to be searched for.
  - Return Value:
    - If the `key` is found, the function returns the index where it is located.
    - If the `key` is not found, the function returns `-1`.

- **Main Function (`main`):**
  - Creates an array `list` with sorted values from 1 to 10.
  - Asks the user to input a desired element (`desired_Element`).
  - Calls the `BinarySearch` function to search for the `desired_Element` in the `list`.
  - Prints whether the `desired_Element` is found or not along with its index.

## Usage
1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. Input a value to search for in the sorted array.
4. The program will display whether the element is found and its index, or notify that the key is not found.

## Example
```cpp
// User Input
PLease Enter the desired elemnt : 7

// Program Output
Key is : 7 Found at 6 index
```

## Notes
- The array must be sorted for binary search to work correctly.
- This example assumes that the array is sorted in ascending order.

---
