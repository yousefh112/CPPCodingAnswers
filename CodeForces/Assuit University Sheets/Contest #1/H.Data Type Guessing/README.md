# Problem Statement: Data Type Guessing

## Problem Description

You are given three numbers: `n`, `k`, and `a`. Your task is to identify the data type of the result obtained by multiplying `n` by `k` and then dividing by `a`.

Identify whether the data type of `n * k / a` is `int`, `long long`, or `double`.

## Input

The input consists of a single line containing three integers `n`, `k`, and `a` (1≤a,k,n≤2147483647).

## Output

Print one of the following options (without quotes) based on the data type of `n * k / a`:

- "int": If the result is within the range of [−2147483648, 2147483647].
- "long long": If the result is outside the range of an `int`.
- "double": If the result has a floating-point component.

## Examples

### Input

```
3 6 9
```

### Output

```
int
```

### Input

```
100000 200000 4
```

### Output

```
long long
```

## Note

A result is considered to be of type "double" if it has a floating-point component.

The range of `int` is [−2147483648, 2147483647]. `long long` can hold values of a bigger range than that of `int`.