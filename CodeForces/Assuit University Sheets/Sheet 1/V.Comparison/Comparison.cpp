#include <iostream>
using namespace std;

int main()
{
    // Declare variables for two integers (A and B) and a character (S)
    int A, B;
    char S;

    // Input values for A, S, and B
    cin >> A >> S >> B;

    // Use a switch statement to check the value of S
    switch (S)
    {
    case '<':
        // Check if A is less than B
        if (A < B)
        {
            cout << "Right" << endl; // Output "Right" if true
        }
        else
        {
            cout << "Wrong" << endl; // Output "Wrong" if false
        }
        break;
    case '>':
        // Check if A is greater than B
        if (A > B)
        {
            cout << "Right" << endl; // Output "Right" if true
        }
        else
        {
            cout << "Wrong" << endl; // Output "Wrong" if false
        }
        break;
    case '=':
        // Check if A is equal to B
        if (A == B)
        {
            cout << "Right" << endl; // Output "Right" if true
        }
        else
        {
            cout << "Wrong" << endl; // Output "Wrong" if false
        }
        break;

    default:
        // Default case if S is none of the specified characters
        break;
    }

    return 0; // Return 0 to indicate successful execution
}
