# C++ Program with Namespace Usage

## Overview
This C++ program demonstrates the usage of the `namespace` feature to simplify the code when working with the `cout` statement from the `std` (standard) namespace. It provides a concise example of how to avoid writing `std::` repetitively by introducing the `using namespace std;` directive.

## Code Explanation
The code includes the necessary header file `<iostream>` for input and output operations. It uses the `std` namespace to simplify the usage of the `cout` statement. Instead of repeatedly writing `std::cout`, the `using namespace std;` directive is employed at the beginning, allowing the use of `cout` directly.

### Code Sample
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hey, writing std:: is pain, ";
    cout << "change the program so I don't have to write it.";
    return 0;
}

