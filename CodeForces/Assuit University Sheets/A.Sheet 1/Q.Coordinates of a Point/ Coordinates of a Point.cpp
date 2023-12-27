#include <iostream>
using namespace std;

int main() {
    // Declare variables for X and Y
    float X, Y;

    // Input values for X and Y
    cin >> X >> Y;

    // Check if the point is at the origin
    if (X == 0 && Y == 0) {
        cout << "Origem" << endl;
    }
    // Check if the point lies on the X-axis
    else if (X != 0 && Y == 0) {
        cout << "Eixo X" << endl;
    }
    // Check if the point lies on the Y-axis
    else if (X == 0 && Y != 0) {
        cout << "Eixo Y" << endl;
    }
    // Check if the point is in Quadrant 1
    else if (X > 0 && Y > 0) {
        cout << "Q1" << endl;
    }
    // Check if the point is in Quadrant 2
    else if (X < 0 && Y > 0) {
        cout << "Q2" << endl;
    }
    // Check if the point is in Quadrant 3
    else if (X < 0 && Y < 0) {
        cout << "Q3" << endl;
    }
    // Check if the point is in Quadrant 4
    else if (X > 0 && Y < 0) {
        cout << "Q4" << endl;
    }

    // Return 0 to indicate successful completion
    return 0;
}
