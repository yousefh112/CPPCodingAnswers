# Mathematical Expression Problem

## Problem Description
Given a mathematical expression, determine whether it is one of the following expressions: A + B = C, A - B = C, or A * B = C. Here, A, B, and C are three numbers, S is the sign between A and B (either '+', '-', '*'), and Q is the '=' sign.

Print "Yes" if the expression is correct; otherwise, print the correct answer of the expression.

## Input
- Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100, -105 ≤ C ≤ 105).
- The character S can be one of the following: '+', '-', '*'.

## Output
- Output either "Yes" or the correct answer depending on the statement.

## Examples
### Example 1
#### Input
```
5 + 10 = 15
```
#### Output
```
Yes
```
### Example 2
#### Input
```
3 - 1 = 2
```
#### Output
```
Yes
```
### Example 3
#### Input
```
2 * 10 = 19
```
#### Output
```
20
```

## Note
- Time limit per test: 0.25 seconds
- Memory limit per test: 256 MB