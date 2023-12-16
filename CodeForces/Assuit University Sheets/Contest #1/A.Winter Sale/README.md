# Winter Sale T-Shirt Price Calculator

The winter sale is on, and Mrs. Sarah is looking to buy a T-shirt for her son. The T-shirt comes with a discount percentage, and she wants to find out the original price before the discount. Your task is to help her by providing a program that calculates the original price.

## Input

The input consists of a single line containing two numbers, `X` and `P`. 
- \(1 \leq X \leq 99\): The discount percentage.
- \(1 \leq P \leq 4 \times 10^4\): The price of the T-shirt after the discount.

## Output

Print the price of the T-shirt before the discount, rounded up to two decimal places.

## Examples

### Input
```
20 80
```
### Output
```
100.00
```

### Input
```
15 20
```
### Output
```
23.53
```

## Implementation

The provided C++ program demonstrates the calculation. The `DiscountPercentage` (`X`) and `DiscountedPrice` (`P`) are read from the user, and the original price is then calculated using the formula \( \text{OriginalPrice} = \frac{\text{DiscountedPrice}}{1 - \frac{\text{DiscountPercentage}}{100}} \). The result is printed with fixed precision (two decimal places).