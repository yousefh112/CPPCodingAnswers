#include <iostream>
using namespace std;
int main()
{
    int A, B; // Declare two integer variables A and B to store user input.

    // Prompt the user to enter values for A and B.
    cin >> A >> B;
    // Check if A is greater than or equal to B.
    if (A > B || A == B)
    {
        cout << "Yes" << endl; // If the condition is true, print "Yes" to the console.
    }
    else
    {
        cout << "No" << endl; // If the condition is false, print "No" to the console.
    }

    return 0;
}
