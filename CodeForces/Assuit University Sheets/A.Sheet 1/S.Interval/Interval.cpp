#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the input number
    double X;

    // Take input from the user
    cin >> X;

    // Check which interval the number belongs to and print the result
    if (X >= 0 && X <= 25) {
        cout << "Interval [0,25]" << endl;
    } else if (X > 25 && X <= 50) {
        cout << "Interval (25,50]" << endl;
    } else if (X > 50 && X <= 75) {
        cout << "Interval (50,75]" << endl;
    } else if (X > 75 && X <= 100) {
        cout << "Interval (75,100]" << endl;
    } else {
        // If the number doesn't belong to any interval, print "Out of Intervals"
        cout << "Out of Intervals" << endl;
    }

    
    return 0;
}
