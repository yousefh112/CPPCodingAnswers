```plaintext
# Ali Baba and Puzzles

## Problem Description
Ali Baba has a puzzle with four numbers, and the task is to check whether he can obtain the fourth number using arithmetic operators (+, −, ×) between the other three numbers. Each operator should be used only once.

```
a □ b □ c = d
```

## Input
- Four integers a, b, c, and d (−10^9 ≤ a, b, c ≤ 10^9, −10^18 ≤ d ≤ 10^18).

## Output
- Print "YES" (without quotes) if it is possible to obtain the fourth number using arithmetic operators; otherwise, print "NO".

## Examples
### Example 1
#### Input
```
3 4 5 23
```
#### Output
```
YES
```
### Example 2
#### Input
```
9 5 3 7
```
#### Output
```
YES
```
### Example 3
#### Input
```
1 2 3 1
```
#### Output
```
NO
```

## Explanation
- In the first example, Ali Baba can obtain 23 by using arithmetic operations on 3, 4, and 5.
- In the second example, it is possible to obtain 7 by using arithmetic operations on 9, 5, and 3.
- In the third example, it is not possible to obtain 1 using the given arithmetic operations.
```

```plaintext
# How to Use
1. Input four integers a, b, c, and d.
2. Run the program.
3. The program will output "YES" if it is possible to obtain the fourth number using the specified arithmetic operations, otherwise "NO".
```