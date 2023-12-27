#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Variables for user input
    long double a, n, k;
    // Prompt user for input and store in variables
    cin >> n >> k >> a;

    // Calculate the result of the mathematical expression
    long double result = (n * k) / a;
    // Calculating thefractional part
    double fractional_part, integer_part;
    fractional_part = modf(result, &integer_part);
    // Check if there is no fractional part
    if (fractional_part == 0.0)
    {
        // The result is an integer
        if (result >= -2147483648 && result <= 2147483647)
        {
            cout << "int" << endl;
        }
        // The result is a long long
        else
        {
            cout << "long long" << endl;
        }
    }
    // If there is a fractional part the result is a double
    else
    {
        cout << "double" << endl;
    }

    return 0;
}