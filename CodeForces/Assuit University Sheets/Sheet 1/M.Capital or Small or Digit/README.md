
# Capital or Small or Digit

## Problem Statement

Given a letter X, determine whether X is a Digit or an Alphabet. If it is an Alphabet, determine if it is in Capital Case or Small Case.

**Note:**

- Digits in ASCII: '0' = 48, '1' = 49, ... etc.
- Capital letters in ASCII: 'A' = 65, 'B' = 66, ... etc.
- Small letters in ASCII: 'a' = 97, 'b' = 98, ... etc.

## Input

Only one line containing a character X which will be a capital or small letter or digit.

## Output

Print a single line containing:
- "IS DIGIT" if X is a digit.
- "ALPHA" in the first line followed by a new line that contains:
  - "IS CAPITAL" if X is a capital letter.
  - "IS SMALL" if X is a small letter.

## Examples

### Input

```
A
```

### Output

```
ALPHA
IS CAPITAL
```

### Input

```
9
```

### Output

```
IS DIGIT
```

### Input

```
a
```

### Output

```
ALPHA
IS SMALL
```

**Note:**
It is recommended to read about ASCII Code [here](https://www.javatpoint.com/ascii) to understand the ASCII values used in the problem.

---