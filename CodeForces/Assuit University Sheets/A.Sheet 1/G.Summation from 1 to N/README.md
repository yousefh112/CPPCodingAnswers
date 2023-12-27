# Summation from 1 to N

## Problem Statement

Given a number N, print the summation of the numbers that are between 1 and N (inclusive).

\[ \sum_{i=1}^{N} i \]

### Input

Only one line containing a number N (1 ≤ N ≤ 10^9).

### Output

Print the summation of the numbers that are between 1 and N (inclusive).

## Example

### Input
```
3
```
### Output
```
6
```
### Explanation
For the input \( N = 3 \), the numbers between 1 and 3 are 1, 2, 3. The summation is \( 1 + 2 + 3 = 6 \).

### Input
```
10
```
### Output
```
55
```
### Explanation
For the input \( N = 10 \), the numbers between 1 and 10 are 1, 2, 3, 4, 5, 6, 7, 8, 9, 10. The summation is \( 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55 \).

## Note

This problem involves calculating the summation of consecutive integers. The formula for the summation of the first \( N \) natural numbers is \( \frac{N \cdot (N + 1)}{2} \). In this case, the numbers are from 1 to \( N \), so the formula directly applies.