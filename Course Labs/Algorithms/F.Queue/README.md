# Queue Implementation in C++

## Overview
This C++ program demonstrates the implementation of a simple queue data structure using a linked list. A queue follows the First In First Out (FIFO) principle, where the first element added is the first one to be removed. The program includes a `Queue` class with basic operations such as enqueue, dequeue, front, rear, and isEmpty.

## `Node` Class
- `Node` class is used to create nodes in the queue, with each node containing an integer value (`data`) and a pointer to the next node (`next`).

## `Queue` Class

### Constructor
- `Queue()`: Initializes an empty queue with pointers to the front and rear set to `NULL`.

### Member Functions
1. `bool isEmpty()`: Checks if the queue is empty.
2. `void enqueue(int val)`: Enqueues (inserts) a new element into the queue.
3. `int dequeue()`: Dequeues (removes) an element from the front of the queue.
4. `int front()`: Returns the value at the front of the queue without removing it.
5. `int rear()`: Returns the value at the rear of the queue without removing it.

## `main` Function
- The `main` function demonstrates the usage of the `Queue` class by creating a queue, enqueuing elements, dequeuing elements, and displaying the front and rear values.

## Execution
1. The program initializes an empty queue and performs various queue operations.
2. Output is displayed, indicating the results of each operation.

Feel free to use and modify this queue implementation for your own projects!
