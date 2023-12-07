#include <iostream>
using namespace std;

int main()
{
    // Read the input integer
    int X;
    cin >> X;

    // Extract the thousands digit
    int X2 = X / 1000;

    // Check if the thousands digit is even or odd
    if (X2 % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;
}
