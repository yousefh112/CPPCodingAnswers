# Problem Statement: Lucky Numbers

A two-digit number is considered lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

## Input
- Only one line containing a single number N (10 ≤ N ≤ 99).

## Output
- Print "YES" if the given number is lucky, otherwise print "NO".

## Examples
### Example 1
#### Input
```
39
```
#### Output
```
YES
```
### Example 2
#### Input
```
64
```
#### Output
```
NO
```

In the first example, the number 39 is lucky because 3 is divisible by 9.

In the second example, the number 64 is not lucky because its digits (6 and 4) are not divisible by each other.