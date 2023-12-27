# Memo and Momo Game

Memo and Momo are engaged in a game where they choose positive numbers, and the winner is determined based on certain rules. This document provides information on the rules of the game and how to determine the winner.

## Problem Description

The game consists of Memo choosing a positive number \( a \), and Momo choosing a positive number \( b \). The winner is decided according to the following rules:

1. If both \( a \) and \( b \) are divisible by \( k \), both players win, and the output should be "Both".
2. If only \( a \) is divisible by \( k \), Memo wins, and the output should be "Memo".
3. If only \( b \) is divisible by \( k \), Momo wins, and the output should be "Momo".
4. If neither \( a \) nor \( b \) is divisible by \( k \), no one wins, and the output should be "No One".

## Input

The input consists of a single line containing three positive numbers \( a \), \( b \), and \( k \) (\(1 \leq a, b, k \leq 10^{18}\)).

## Output

Print the answer according to the rules mentioned in the problem statement.

## Examples

### Example 1

**Input:**
```
15 7 3
```

**Output:**
```
Memo
```

### Example 2

**Input:**
```
22 10 2
```

**Output:**
```
Both
```

This document provides clarity on the rules of the game and the expected output for given inputs. The provided C++ code in the repository implements the solution to this problem.