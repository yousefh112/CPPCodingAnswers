# Variable-Length Arrays Problem

This repository contains a C++ program that addresses a problem involving variable-length arrays. The problem requires handling a collection of arrays, each with a variable length, and answering queries based on provided indices.

## Table of Contents

- [Variable-Length Arrays Problem](#variable-length-arrays-problem)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Files](#files)
  - [Input Format](#input-format)
  - [Output Format](#output-format)
  - [Sample Input](#sample-input)
  - [Sample Output](#sample-output)
  - [Building and Running](#building-and-running)
  - [Contributing](#contributing)
  - [License](#license)

## Description

The problem involves working with a collection of variable-length arrays. The input specifies the number of arrays (`n`), the number of queries (`q`), and descriptions of the arrays. Queries require finding and printing the values of elements at specific indices in the arrays.

## Files

1. **main.cpp**: C++ program implementing the solution to the variable-length arrays problem.

## Input Format

The input consists of the following:

1. The number of variable-length arrays (`n`).
2. The number of queries (`q`).
3. Descriptions of the arrays, each represented by a line with the format `k a[i]0 a[i]1 … a[i]k-1`.
4. Queries, each represented by a line with the format `i j`, where `i` is an index in the array of arrays, and `j` is an index in the array located at index `i`.

## Output Format

For each query, the program prints a single integer that denotes the element located at index `j` of the array referenced by index `i`.

## Sample Input

```
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
```

## Sample Output

```
5
9
```

## Building and Running

To build and run the program, follow these steps:

1. Ensure you have a C++ compiler installed on your system.

2. Compile the program:

   ```bash
   g++ main.cpp -o variable_length_arrays
   ```

   This command will generate an executable file named `variable_length_arrays`.

3. Run the executable:

   ```bash
   ./variable_length_arrays
   ```

   Follow the on-screen instructions to input the data and view the results.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or create a pull request.