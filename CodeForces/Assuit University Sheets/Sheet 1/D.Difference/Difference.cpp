#include <iostream>
using namespace std;
int main()
{ // assigning our variables to long long data type
    long long a, b, c, d, x;
    // input data from user
    cin >> a >> b >> c >> d;
    // solving the equation and put the result in a variable x
    x = (a * b) - (c * d);
    // printing x
    cout << "Difference = " << x << endl;

    return 0;
}