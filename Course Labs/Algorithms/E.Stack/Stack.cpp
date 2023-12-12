#include<iostream>
using namespace std;

// Class representing a stack
class Stack {
private:
    int top;          // Index of the top element
    int capacity;     // Maximum capacity of the stack
    int* array;       // Array to store stack elements

public:
    // Constructor: Initializes an empty stack with the given capacity
    Stack(int capacity) {
        this->capacity = capacity;
        this->top = -1;                // Initialize top to -1 as the stack is empty
        this->array = new int[capacity]; // Dynamically allocate memory for the array
    }

    // Destructor: Frees the dynamically allocated memory
    ~Stack() {
        delete[] array;
    }

    // Pushes a new element onto the stack
    void push(int value) {
        if (top >= capacity - 1) {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        array[top] = value;
        cout << value << " pushed to stack" << endl;
    }

    // Pops the top element from the stack
    void pop() {
        if (top <= -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << array[top] << " popped from stack" << endl;
        top--;
    }

    // Returns the value of the top element without removing it
    int peek() {
        if (top <= -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return array[top];
    }

    // Checks if the stack is empty
    bool isEmpty() {
        return (top <= -1);
    }

    // Checks if the stack is full
    bool isFull() {
        return (top >= capacity - 1);
    }
};

int main() {
    // Example usage of the Stack class
    Stack s(5);    // Create a stack with a capacity of 5
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Top element is: " << s.peek() << endl;

    return 0;
}
