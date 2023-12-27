# Digits Summation

## Problem Statement

You are given two numbers, N and M. Your task is to print the summation of their last digits.

### Input

Only one line containing two numbers N, M (0 ≤ N, M ≤ 10^18).

### Output

Print the answer to the problem.

## Approach

To solve this problem, we use string manipulation and conversion. Here's a detailed explanation of the approach:

1. **Variable Declaration:**
   - `N1` and `M1` are declared as strings to store the input numbers.

2. **Input:**
   - The user is prompted to input the values for `N1` and `M1`.

3. **Grabbing the Last Digit:**
   - The last digit from each number is obtained using different methods:
     - `N2 = N1[N1.size() - 1]`: Using the `[]` method to get the last character of the string.
     - `M2 = M1.at(M1.size() - 1)`: Using the `.at()` method to get the last character of the string.

4. **Conversion to Integer:**
   - The obtained last digits (`N2` and `M2`) are then converted from characters to integers:
     - `N3 = stoi(string(1, N2))`: Using `std::stoi()` to convert the character `N2` to an integer.
     - `M3 = stoi(string(1, M2))`: Using `std::stoi()` to convert the character `M2` to an integer.

5. **Summation:**
   - The summation of the last digits (`N3` and `M3`) is calculated.

6. **Output:**
   - The result of the summation is printed to the console.

## Slicing Methods and Conversion:

### Grabbing the Last Digit:

- `N2 = N1[N1.size() - 1]`: Uses the `[]` method to access the last character in the string `N1`. `N1.size()` returns the length of the string, and subtracting 1 gives the index of the last character.

- `M2 = M1.at(M1.size() - 1)`: Uses the `.at()` method to access the last character in the string `M1`. Similar to the first method, it ensures we get the last character.

### Conversion to Integer:

- `N3 = stoi(string(1, N2))`: Creates a string containing a single character (`N2`) and uses `std::stoi()` to convert it to an integer.

- `M3 = stoi(string(1, M2))`: Similar to the previous line, converts the character `M2` to an integer.

By combining these techniques, we efficiently solve the problem and obtain the desired result.