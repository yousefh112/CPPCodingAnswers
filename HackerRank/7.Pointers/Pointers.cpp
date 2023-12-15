#include <iostream>
#include <cstdlib>

// Function to update the values pointed to by a and b
void update(int *a, int *b) {
    // Calculate the sum and absolute difference
    int sum = *a + *b;
    int diff = abs(*a - *b);

    // Update the values in memory
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;

    // Input two integers
    std::cin >> a >> b;

    // Call the update function with the addresses of a and b
    update(&a, &b);

    // Print the updated values
    std::cout << a << "\n" << b;

    return 0;
}
