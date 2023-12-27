# Problem Statement: Hard Compare

## Problem Description

You are given four numbers: A, B, C, and D. Your task is to compare the results of AB and CD. If AB is greater than CD, print "YES"; otherwise, print "NO".

## Input

The input consists of a single line containing four numbers A, B, C, and D (1≤A,C≤10^7, 1≤B,D≤10^12).

## Output

Print "YES" if AB > CD, otherwise print "NO".

## Examples

### Input

```
3 2 5 4
```

### Output

```
NO
```

### Input

```
5 2 4 2
```

### Output

```
YES
```

### Input

```
5 2 5 2
```

### Output

```
NO
```

## Note

**Example 1:**

3^2 = 9 and 5^4 = 625. Since 9 < 625, the answer is NO.

**Example 2:**

5^2 = 25 and 4^2 = 16. Since 25 > 16, the answer is YES.

**Example 3:**

5^2 = 25 and 5^2 = 25. Since 25 = 25, the answer is NO.