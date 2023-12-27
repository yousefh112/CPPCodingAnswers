# Watermelon Division Problem

## Problem Statement

Pete and his friend Billy decided to buy a watermelon. After weighing the watermelon, they found it weighed 'w' kilos. Being great fans of even numbers, they want to divide the watermelon into two parts, each weighing an even number of kilos. It's not necessary for the parts to be equal, but each should have a positive weight.

Write a program to determine if it's possible to divide the watermelon according to Pete and Billy's preference.

### Input
- The input consists of a single integer 'w' (1 ≤ w ≤ 100) representing the weight of the watermelon.

### Output
- Print "YES" if it's possible to divide the watermelon into two parts, each weighing an even number of kilos; otherwise, print "NO."

## Approach

To solve this problem, we need to check if the given weight 'w' can be divided into two parts, each weighing an even number of kilos. We can follow these steps:

1. Check if 'w' is greater than or equal to 3 (since it's not possible to divide 1 or 2 kilos into two even parts).
2. Check if 'w' is an even number by using the modulo operator (`%`). If 'w % 2 == 0', it means 'w' is even.

If both conditions are met, we print "YES"; otherwise, we print "NO."

This approach ensures that the watermelon can be divided into two parts, each weighing an even number of kilos.

## Implementation Details

- Language: [Specify the programming language you used]
- File: [Specify the filename where your solution is implemented]

## Note

This problem is meant to test your understanding of basic conditions and requirements. Ensure that your solution covers all edge cases and provides the correct output for a given weight 'w.'

Happy coding!