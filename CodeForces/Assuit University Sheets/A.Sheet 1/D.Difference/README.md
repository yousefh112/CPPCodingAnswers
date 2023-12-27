# Difference

## Problem Description

Given four numbers A, B, C, and D, your task is to print the result of the following equation:

X = (A * B) - (C * D).

## Input

Only one line containing 4 separated numbers A, B, C, and D (-105 ≤ A, B, C, D ≤ 105).

## Output

Print "Difference = " without quotes followed by the equation result.

## Explanation: Use of `long long` Data Type

This problem involves multiplication, and the result of the equation may vary in magnitude. To ensure that the calculations don't overflow or result in incorrect values, the use of `long long` data type is recommended. If regular `int` data type is used and the product of A * B or C * D exceeds the range of a 32-bit integer, it may lead to incorrect results or undefined behavior.

## Examples

### Input

```
1 2 3 4
```

### Output

```
Difference = -10
```

### Input

```
2 3 4 5
```

### Output

```
Difference = -14
```

### Input

```
4 5 2 3
```

### Output

```
Difference = 14
```