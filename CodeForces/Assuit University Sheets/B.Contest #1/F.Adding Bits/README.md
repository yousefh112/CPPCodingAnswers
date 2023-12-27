
# Adding Bits

## Problem Statement

Peter Parker has to implement a 32-bit adder for a machine, but he made a mistake in the design part. The mistake involves bitwise addition with a carry bit that is always zero. Now, he needs an efficient program to reproduce the output by adding two unsigned 32-bit decimal numbers in the same way as his flawed circuit does.

## Input

The input consists of a single line containing two decimal numbers `A` and `B` (0 ≤ A, B ≤ 10^9).

## Output

Print the value after adding `A` and `B` following Peter Parker's flawed bitwise addition, where the carry bit is always zero.

## Example

### Input

```
4 6
```

### Output

```
2
```

### Input

```
6 9
```

### Output

```
15
```

## Explanation

For example, given the input `4 6`, the bitwise addition without considering the carry is:

```
4 = 00000000000000000000000000000100
+
6 = 00000000000000000000000000000110
=
2 = 00000000000000000000000000000010
```

The output should be `2`.

---
