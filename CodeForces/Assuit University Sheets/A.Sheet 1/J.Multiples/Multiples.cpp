#include <iostream>
using namespace std;

int main() {
    long A, B;
    
    // Input two numbers
    cin >> A >> B;

    // Check if A is a multiple of B or vice versa
    if (A % B == 0 || B % A == 0) {
        cout << "Multiples" << endl;
    } else {
        cout << "No Multiples" << endl;
    }

    return 0;
}
