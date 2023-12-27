#include <iostream> 
#include <cmath>
using namespace std;

// function to check if logarithm of first base to the power of second base is greater
bool checkGreaterLog(double num1, double num2, double num3, double num4) {
    // calculate result1
    double res1 = num2 * log(num1);
    // calculate result2
    double res2 = num4 * log(num3);

    // return true if result1 is greater than result2, false otherwise.
    return res1 > res2;
}

int main()
{
    double num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    // call the function to check if logarithm of first base to the power of second base is greater
    bool isGreater = checkGreaterLog(num1, num2, num3, num4);

    // output the result
    if (isGreater)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}