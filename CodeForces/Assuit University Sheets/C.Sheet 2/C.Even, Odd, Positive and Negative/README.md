## Problem: Even, Odd, Positive and Negative

### Problem Statement
Given N numbers, count how many of these values are even, odd, positive, and negative.

### Input
- The first line contains one number N (1 ≤ N ≤ 10^3), representing the number of values.
- The second line contains N numbers (-10^5 ≤ Xi ≤ 10^5).

### Output
Print four lines with the following format:
1. "Even: X", where X is the number of even numbers in the given input.
2. "Odd: X", where X is the number of odd numbers in the given input.
3. "Positive: X", where X is the number of positive numbers in the given input.
4. "Negative: X", where X is the number of negative numbers in the given input.

### Example
#### Input
```
5
-5 0 -3 -4 12
```
#### Output
```
Even: 3
Odd: 2
Positive: 1
Negative: 3
```

### Explanation
In the given example:
- Even Numbers are: 0, -4, 12
- Odd Numbers are: -5, -3
- Positive Numbers are: 12
- Negative Numbers are: -5, -3, -4

## Implementation Details
The solution involves reading N numbers, categorizing them as even or odd, and then counting the positive and negative numbers. The output should display the count for each category in the specified format.

### Input Handling
1. Read the number N from the first line.
2. Read N numbers from the second line.

### Output
Print four lines with counts for even, odd, positive, and negative numbers.

### Run Instructions
1. Input the value of N.
2. Input N numbers separated by spaces.
3. Run the program.
4. The program will print counts for even, odd, positive, and negative numbers in separate lines.

Feel free to use, modify, and share this problem statement. Happy coding!