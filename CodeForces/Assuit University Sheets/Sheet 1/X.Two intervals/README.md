# Two Intervals Problem

## Problem Description
Given the boundaries of two intervals [l1, r1] and [l2, r2], determine the boundaries of their intersection.

Note: Boundaries refer to the two ends of an interval, denoted as the starting number and the ending number.

## Input
- Only one line contains two intervals: [l1, r1] and [l2, r2].
- The intervals are represented as four integers A, B, C, D (1 ≤ A, B, C, D ≤ 10^9) such that A ≤ B and C ≤ D.

## Output
- If there is an intersection between these two intervals, print its boundaries.
- If there is no intersection, print -1.

## Examples
### Example 1
#### Input
```
1 15 5 27
```
#### Output
```
5 15
```
### Example 2
#### Input
```
2 5 6 12
```
#### Output
```
-1
```

## Note
- Time limit per test: 1 second
- Memory limit per test: 256 megabytes