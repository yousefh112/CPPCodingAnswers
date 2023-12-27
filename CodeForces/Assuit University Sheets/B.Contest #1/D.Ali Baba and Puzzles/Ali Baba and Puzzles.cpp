#include <iostream>
using namespace std;
int main()
{// Declare variables for input
    long long int a, b, c, d;
    // Read input values
    cin >> a >> b >> c >> d;
// Check if d can be obtained using arithmetic operations on a, b, and c
// If one of the conditions is true, print "YES"
    
    if (d == a + b - c)
    {
        cout << "YES" << endl;
    }
    else if (d == a + b * c)
    {
        cout << "YES" << endl;
    }
    else if (d == a - b + c)
    {
        cout << "YES" << endl;
    }
    else if (d == a - b * c)
    {
        cout << "YES" << endl;
    }
    else if (d == a * b + c)
    {
        cout << "YES" << endl;
    }
    else if (d == a * b - c)
    {
        cout << "YES" << endl;
    }
    // If none of the conditions is true, print "NO"
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}