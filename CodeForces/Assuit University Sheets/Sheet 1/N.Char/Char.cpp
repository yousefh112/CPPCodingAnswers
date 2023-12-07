#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare a string variable X to store user input
    string X;
    // Read user input into variable X
    cin >> X;

    // Check if the first character of X is a capital letter (ASCII 65-90)
    if (X.at(0) >= 65 && X[0] <= 90)
    {
        // Convert the capital letter to small letter by adding 32 to its ASCII code
        X.at(0) += 32;
        // Output the modified string
        cout << X << endl;
    }
    // Check if the first character of X is a small letter (ASCII 97-122)
    else if (X.at(0) >= 97 && X[0] <= 122)
    {
        // Convert the small letter to capital letter by subtracting 32 from its ASCII code
        X.at(0) -= 32;
        // Output the modified string
        cout << X << endl;
    }

    // Return 0 to indicate successful execution
    return 0;
}
