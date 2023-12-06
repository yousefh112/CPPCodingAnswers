# Problem Statement: Two Numbers

## Overview
Given two numbers A and B, this program calculates and prints the floor, ceil, and round of A/B.

### Definitions:
- **Floor:** The floor function (`floor()`) takes a real number X and outputs the greatest integer less than or equal to X.

- **Ceil:** The ceil function (`ceil()`) takes a real number X and outputs the smallest integer larger than or equal to X.

- **Round:** The round function (`round()`) takes a real number X and outputs the closest integer to that number X.

### Input
Only one line containing two numbers A and B (1≤A,B≤103)

### Output
Print 3 lines that contain the following in the same order:

1. "floor A / B = Floor result" without quotes.
2. "ceil A / B = Ceil result" without quotes.
3. "round A / B = Round result" without quotes.

## Examples
**Input:**
```
10 3
```
**Output:**
```
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
```

**Input:**
```
10 4
```
**Output:**
```
floor 10 / 4 = 2
ceil 10 / 4 = 3
round 10 / 4 = 3
```

**Input:**
```
10 6
```
**Output:**
```
floor 10 / 6 = 1
ceil 10 / 6 = 2
round 10 / 6 = 2
```

## Function Explanation
- **Floor (floor()):** The `floor()` function rounds down the result of A/B to the nearest integer less than or equal to the result.

- **Ceil (ceil()):** The `ceil()` function rounds up the result of A/B to the nearest integer greater than or equal to the result.

- **Round (round()):** The `round()` function rounds the result of A/B to the nearest integer.

## Notes
For more information on rounding methods, visit [here](https://www.mathsisfun.com/numbers/rounding-methods.html).

For details on flooring and ceiling methods, visit [here](https://www.mathsisfun.com/sets/function-floor-ceiling.html).