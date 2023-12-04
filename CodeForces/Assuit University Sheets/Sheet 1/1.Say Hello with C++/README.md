# Say Hello With C++

## Problem Description

You are given a name `S`. Your task is to print "Hello, (name)" without parentheses.

## Input

- Only one line containing a string `S`.

## Output

- Print "Hello, " without quotes, followed by the name `S`.

## Example

### Input
```
programmer
```

### Output
```
Hello, programmer
```

## Explanation

For the given input, the program should output "Hello, programmer" as specified in the problem statement.

## Usage of getline()

In C++, the `getline()` function is commonly used to read input lines, especially when dealing with strings. It reads characters from the input stream until a newline character is encountered and stores them in a string variable. In this problem, `getline()` can be used to read the name `S` from the input.

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::getline(std::cin, name);

    // Rest of the program logic...
    
    return 0;
}
```

Using `getline()` ensures that spaces and whitespace characters are correctly captured as part of the input string. This is particularly useful when dealing with names or phrases that may contain spaces.