# Simple Calculator

## Problem Description

Given two numbers X and Y, your task is to print the summation, multiplication, and subtraction of these two numbers.

## Input

Only one line containing two separated numbers X, Y (1 ≤ X, Y ≤ 105).

## Output

Print 3 lines that contain the following in the same order:

- "X + Y = summation result" without quotes.
- "X * Y = multiplication result" without quotes.
- "X - Y = subtraction result" without quotes.

## Explanation: Use of `long long` Data Type

This problem requires handling the results of addition, multiplication, and subtraction. The use of `long long` data type is necessary to ensure that the calculations don't overflow for larger values of X and Y. If regular `int` data type is used and the summation, multiplication, or subtraction result exceeds the range of a 32-bit integer, it may lead to incorrect results or undefined behavior.

## Example

### Input

```
5 10
```

### Output

```
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
```

## Note

Be careful with spaces.