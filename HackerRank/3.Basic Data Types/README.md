# HackerRank Problem: Input and Output Formatting

## Input Format
The input consists of the following space-separated values in the order: `int`, `long`, `char`, `float`, and `double`. The input is provided as a single line through the standard input (stdin).

### Example Input
For instance, an input might be: `10 1000000000 a 3.14159 10.123456789`

## Output Format
The output requires printing each element on a new line in the same order as received in the input. It is essential to note specific formatting requirements for the floating-point numbers:
- The floating-point value (`float`) should be printed with accuracy up to 3 decimal places.
- The double value (`double`) should be printed with accuracy up to 9 decimal places.

### Example Output
Following the example input above, the expected output would be:
10
1000000000
a
3.142
10.123456789

## How to Solve
To solve this problem, the input needs to be read in the specified order: `int`, `long`, `char`, `float`, and `double`. After reading the input values, use `cout` to print each element on a new line in the same order it was received.

### Handling Floating-Point Values
To ensure accurate representation of the floating-point values, use `std::fixed` for the `float` and `double` data types. This ensures the desired precision when printing these values.

