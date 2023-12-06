# Basic Data Types

## Problem Description

The following lines describe some C++ data types, their format specifiers, and their most common bit widths:

- `int`: 32-bit integer.
- `long long`: 64-bit integer.
- `char`: 8-bit characters & symbols.
- `float`: 32-bit real value.
- `double`: 64-bit real value.

### Reading

To read a data type, use the following syntax:

```cpp
cin >> VariableName;
```

For example, to read a character followed by a double:

```cpp
char ch;
double d;
cin >> ch >> d;
```

### Printing

To print a data type, use the following syntax:

```cpp
cout << VariableName;
```

For example, to print a character followed by a double:

```cpp
char ch = 'd';
double d = 234.432;
cout << ch << " " << d;
```

## Explanation of Using `fixed`

In this problem, the `fixed` manipulator is used when printing `float` and `double` to ensure that the floating-point numbers are displayed in fixed-point notation. This means that the numbers will be displayed with a fixed number of digits after the decimal point, preventing the use of scientific notation.

For example, without `fixed`, a number like `334.23` might be displayed as `3.3423e+02` (scientific notation). Using `fixed` ensures that the number is displayed in the form `334.23`.

## Input

Only one line containing the following space-separated values: int, long long, char, float, and double, respectively.

## Output

Print each element on a new line in the same order it was received as input.

Don't print any extra spaces.

## Example

### Input

```
3 12345678912345 a 334.23 14049.30493
```

### Output

```
3
12345678912345
a
334.23
14049.3
```