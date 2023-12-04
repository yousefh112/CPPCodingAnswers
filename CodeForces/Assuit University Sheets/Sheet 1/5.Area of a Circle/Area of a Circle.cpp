#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
// declaring Pi as a global constant
const double Pi = 3.141592653;
int main()
{   // Assigning our variables to double to solve this problem
    double R, area;
    cin >> R;
    // calculating the area using formula (Pi * R^2)
    area = Pi * pow(R, 2);
    // Using fixed to protect the result
    // Using setprecision(9) to print 9 digits after decimal point.
    // printing the area of the circle with 9 digits
    cout << fixed << setprecision(9) << area << endl;
    return 0;
}