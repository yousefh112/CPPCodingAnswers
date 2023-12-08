#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    // Input three numbers
    cin >> A >> B >> C;

    // Determine the minimum, middle, and maximum values
    int minimum, middle, maximum;

    // Find minimum
    if (A <= B && A <= C) {
        minimum = A;
        if (B <= C) {
            middle = B;
            maximum = C;
        } else {
            middle = C;
            maximum = B;
        }
    } else if (B <= A && B <= C) {
        minimum = B;
        if (A <= C) {
            middle = A;
            maximum = C;
        } else {
            middle = C;
            maximum = A;
        }
    } else {
        minimum = C;
        if (A <= B) {
            middle = A;
            maximum = B;
        } else {
            middle = B;
            maximum = A;
        }
    }

    // Output the numbers in ascending order
    cout << minimum << endl << middle << endl << maximum << endl << endl;

    // Output the values in the sequence as they were read
    cout << A << endl << B << endl << C << endl;

    return 0;
}
