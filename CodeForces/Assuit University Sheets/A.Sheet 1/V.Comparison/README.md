# Comparison Problem

## Problem Description
Given a comparison symbol `S` between two numbers `A` and `B`, determine whether the comparison is Right or Wrong. The possible comparisons are A < B, A > B, and A = B, where A and B are two integer numbers, and S refers to the sign between them.

## Input
- Only one line containing three integers A, S, and B respectively (-100 ≤ A, B ≤ 100).
- The character S can be one of the following: '<', '>', '='.

## Output
- Print "Right" if the comparison is true.
- Print "Wrong" if the comparison is false.

## Examples
### Example 1
#### Input
```
5 > 4
```
#### Output
```
Right
```
### Example 2
#### Input
```
9 < 1
```
#### Output
```
Wrong
```
### Example 3
#### Input
```
4 = 4
```
#### Output
```
Right
```

## Note
- Time limit per test: 1 second
- Memory limit per test: 256 megabytes