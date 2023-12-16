#include <iostream>
using namespace std;

int main() {
    // Declare variables for input values
    long long int a, b, k;

    // Read values for a, b, and k from the user
    cin >> a >> b >> k;

    // Check if both a and b are divisible by k
    if (a % k == 0 && b % k == 0) {
        cout << "Both" << endl;
    }
    // Check if only a is divisible by k
    else if (a % k == 0 && b % k != 0) {
        cout << "Memo" << endl;
    }
    // Check if only b is divisible by k
    else if (a % k != 0 && b % k == 0) {
        cout << "Momo" << endl;
    }
    // If neither a nor b is divisible by k
    else {
        cout << "No One" << endl;
    }

    return 0;
}
