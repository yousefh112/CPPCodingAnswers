#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare a string variable X to store user input
    string X; // X = "5"

    // Read input from the user and store it in the variable X
    cin >> X;

    // Check if the first character of the string X is a digit (0-9)
    if (X.at(0) >= 48 && X[0] <= 57)
    {
        // Print message indicating that the first character is a digit
        cout << "IS DIGIT" << endl;
    }
    // Check if the first character of the string X is an uppercase alphabet letter (A-Z)
    else if (X.at(0) >= 65 && X[0] <= 90)
    {
        // Print message indicating that the first character is an uppercase alphabet letter
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    // Check if the first character of the string X is a lowercase alphabet letter (a-z)
    else if (X.at(0) >= 97 && X[0] <= 122)
    {
        // Print message indicating that the first character is a lowercase alphabet letter
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }

    // Return 0 to indicate successful execution
    return 0;
}
