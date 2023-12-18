#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the character
    char x;

    // Read a character from the user
    cin >> x;

    // Check if the character is 'z'
    if (x == 'z') {
        // If 'z', set the character to 'a' and print
        x = 'a';
        cout << x << endl;
    } else {
        // If not 'z', increment the character and print
        x += 1;
        cout << x << endl;
    }

    return 0;
}
