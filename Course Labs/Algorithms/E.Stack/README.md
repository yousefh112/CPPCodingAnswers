```markdown
# Stack Implementation in C++

## Overview
This C++ program demonstrates the implementation of a stack data structure. A stack follows the Last In First Out (LIFO) principle, where the last element added is the first one to be removed. The program includes a `Stack` class with basic operations such as push, pop, peek, isEmpty, and isFull.

## `Stack` Class

### Constructor
- `Stack(int capacity)`: Initializes an empty stack with the given capacity.

### Destructor
- `~Stack()`: Frees the dynamically allocated memory for the stack.

### Member Functions
1. `push(int value)`: Pushes a new element onto the stack. If the stack is full, a message is displayed.
2. `pop()`: Pops the top element from the stack. If the stack is empty, a message is displayed.
3. `peek()`: Returns the value of the top element without removing it. If the stack is empty, a message is displayed.
4. `isEmpty()`: Returns true if the stack is empty, otherwise false.
5. `isFull()`: Returns true if the stack is full, otherwise false.

## Example Usage (main function)
```cpp
int main() {
    // Create a stack with a capacity of 5
    Stack s(5);

    // Push elements onto the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Print the top element
    cout << "Top element is: " << s.peek() << endl;

    // Pop two elements from the stack
    s.pop();
    s.pop();

    // Print the top element after pops
    cout << "Top element is: " << s.peek() << endl;

    return 0;
}
```

## Execution
1. The `main` function demonstrates the creation of a stack, pushing elements onto it, and performing pop and peek operations.
2. The program outputs the results of each operation.

Feel free to use and modify this stack implementation for your own projects!
```

This README provides an overview of the stack implementation, details about the `Stack` class, and an example usage in the `main` function. It serves as a guide for users to understand and utilize the provided C++ stack implementation.