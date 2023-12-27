#include <iostream>
using namespace std;

int main() {
    // Declare variables to store two numbers and an operator
    long long int A, B;
    char S;

    // Read input values: A, operator S, and B
    cin >> A >> S >> B;

    // Use a switch statement to perform the operation based on the operator
    switch (S) {
        case '+':
            // Addition
            cout << A + B << endl;
            break;
        case '-':
            // Subtraction
            cout << A - B << endl;
            break;
        case '*':
            // Multiplication
            cout << A * B << endl;
            break;
        case '/':
            // Division
            cout << A / B << endl;
            break;
    }

    return 0;
}
