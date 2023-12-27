# E. Interval Sweep

## Problem Statement

Given two numbers a and b. You have to answer with "YES" if there is a non-empty interval consisting of numbers from l to r (l, l+1, l+2, ..., r) with a odd numbers and b even numbers, or "NO" otherwise.

### Input
Only one line containing two numbers a and b (0≤a,b≤100) the number of odd numbers and the number of even numbers in the interval respectively.

### Output
Print "YES" or "NO" as described in the statement.

## Examples

**Input:**
```
2 3
```
**Output:**
```
YES
```

**Input:**
```
3 1
```
**Output:**
```
NO
```

## Note

Example 1:
- Some valid intervals that contain 2 odd numbers and 3 even numbers can be:
  - l=6, r=10 contains numbers (6,7,8,9,10).
  - l=14, r=18 contains numbers (14,15,16,17,18).
```
