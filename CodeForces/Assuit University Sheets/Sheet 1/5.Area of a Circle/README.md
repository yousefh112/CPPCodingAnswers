# Area of a Circle

## Problem Description

Given a number R, your task is to calculate the area of a circle using the following formula:

Area = π * R^2.

Note: Consider π = 3.141592653.

## Input

Only one line containing the number R (1 ≤ R ≤ 100).

## Output

Print the calculated area, with 9 digits after the decimal point.

## Explanation: Usage of `fixed` and `setprecision()`

In this problem, it's essential to print the calculated area with a specific precision, i.e., 9 digits after the decimal point. The `fixed` manipulator is used in conjunction with `setprecision(9)` to achieve this precision when printing the result.

Here's an example of how to use `fixed` and `setprecision()`:

```cpp
#include <iostream>
#include <iomanip>

int main() {
    double R;
    std::cin >> R;

    // Set precision to 9 digits after the decimal point
    std::cout << std::fixed << std::setprecision(9);

    // Calculate and print the area
    double area = 3.141592653 * R * R;
    std::cout << area << std::endl;

    return 0;
}
```

## Example

### Input

```
2.00
```

### Output

```
12.566370612
```

## Note

- Use the data type `double` for this problem.
- Use `setprecision(9)` to print 9 digits after the decimal point.
- You can use the `fixed` and `setprecision()` functions in the `<iomanip>` library. For example:

```cpp
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision(9);
    // your code
}
```