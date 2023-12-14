#include<iostream>
using namespace std;

// Node class for creating nodes in the Queue
class Node {
public:
    int data;
    Node* next;
};

// Queue class implementing basic queue operations
class Queue {
private:
    Node* front;  // Pointer to the front of the queue
    Node* rear;   // Pointer to the rear of the queue

public:
    // Constructor to initialize an empty queue
    Queue() : front(NULL), rear(NULL) {}

    // Check if the queue is empty
    bool isEmpty() {
        return !front;  // Returns true if front is NULL
    }

    // Enqueue (insert) a new element into the queue
    void enqueue(int val) {
        Node* newNode = new Node;  // Create a new node
        newNode->data = val;       // Set the data of the node
        newNode->next = NULL;      // Initialize the next pointer to NULL

        // If the queue is empty, set both front and rear to the new node
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;  // Add the new node to the rear
            rear = newNode;        // Update the rear pointer to the new node
        }
    }

    // Dequeue (remove) an element from the front of the queue
    int dequeue() {
        // Check if the queue is empty
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int val = front->data;  // Get the data of the front node
        Node* oldFront = front;  // Store the front node for deletion
        front = front->next;     // Move the front pointer to the next node

        // If the queue becomes empty after dequeue, update rear to NULL
        if (isEmpty()) {
            rear = NULL;
        }

        delete oldFront;  // Free the memory of the dequeued node
        return val;
    }

    // Get the value at the front of the queue
    int getFront() {
        // Check if the queue is empty
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;  // Return the data of the front node
    }

    // Get the value at the rear of the queue
    int getRear() {
        // Check if the queue is empty
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return rear->data;  // Return the data of the rear node
    }

    // New method to check the size of the queue
    int size() {
        if (isEmpty()) {
            return 0;
        }

        int count = 0;
        Node* temp = front;
        
        // Traverse the queue and count the nodes
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        return count;
    }
};

// Main function demonstrating the usage of the Queue class
int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Dequeued value: " << q.dequeue() << endl;
    cout << "Front value: " << q.getFront() << endl;
    cout << "Rear value: " << q.getRear() << endl;
    cout << "Size of queue: " << q.size() << endl; // New line to print the size of the queue

    return 0;
}
