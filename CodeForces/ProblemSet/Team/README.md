**Problem A: Team**

### Problem Description

Petya, Vasya, and Tonya are forming a team to participate in programming contests. They've decided that they will implement a problem if at least two of them are sure about the solution. Your task is to help them find the number of problems for which they will write a solution.

### Input

The input consists of two lines:

1. The first line contains a single integer `n` (1 ≤ n ≤ 1000) — the number of problems in the contest.
2. The second line contains `n` lines, each containing three integers (0 or 1). If the first number in the line is 1, then Petya is sure about the problem's solution. The second number represents Vasya's view, and the third number represents Tonya's view.

### Output

Print a single integer — the number of problems the friends will implement on the contest.

### Examples

#### Input
```
3
1 1 0
1 1 1
1 0 0
```

#### Output
```
2
```

#### Input
```
2
1 0 0
0 1 1
```

#### Output
```
1
```

### Explanation

In the first example, Petya and Vasya are sure about the solution for the first problem, and all three of them are sure about the solution for the second problem. Therefore, they will write solutions for these two problems. However, only Petya is sure about the solution for the third problem, which is not enough.

In the second example, the friends will only implement the second problem since Vasya and Tonya are sure about the solution.