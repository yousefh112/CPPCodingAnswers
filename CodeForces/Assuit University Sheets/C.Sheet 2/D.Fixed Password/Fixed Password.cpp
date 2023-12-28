#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Variable to store user input
    int N;

    // While loop to take inputs until 1999 is encountered
    while (true)
    {
        // Prompt user for input
        cout << "Enter a number: ";

        // Read input from user
        cin >> N;

        // Check if the current input is 1999
        if (N == 1999)
        {
            // Print "Correct" and exit the loop
            cout << "Correct" << endl;
            break;
        }
        else
        {
            // Print "Wrong" for inputs that are not 1999
            cout << "Wrong" << endl;
        }
    }

    return 0;
}