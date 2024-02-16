#include <iostream>
using namespace std;

int main()
{
    // Declare an integer variable named N to store the user input
    int N;
    // Read an integer value from the standard input (usually the keyboard) and store it in N
    cin >> N;

    for (int i = 1; i <= 12; i++) // This loop prints the multiplication table of N from 1 to 12
    {
        // Print the current multiplication result and a newline character
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}