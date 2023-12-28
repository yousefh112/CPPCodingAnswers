# "Fixed Password" Problem

## Problem Statement

You are given multiple lines, each containing a number `X`, which is a password. Your task is to determine whether each password is correct or not.

Print "Wrong" if the password is incorrect; otherwise, print "Correct" and terminate the program.

The correct password is the number **1999**.

## Input

The input consists of several passwords.

Each line contains a number `X` (103 ≤ X ≤ 104 - 1).

## Output

For each password:

- Print "Wrong" if the password is typed incorrectly.
- Print "Correct" if the password is typed correctly.

## Example

### Input

```
2200
1020
1999
1000
9999
```

### Output

```
Wrong
Wrong
Correct
```

## Note

In the given example, the first two passwords (2200 and 1020) are incorrect, so "Wrong" is printed for each. The third password (1999) is correct, so "Correct" is printed and the program terminates without checking the remaining passwords.