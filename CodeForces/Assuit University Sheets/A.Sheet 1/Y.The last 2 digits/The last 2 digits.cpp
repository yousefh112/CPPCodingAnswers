#include <iostream>
using namespace std;

void solution1()
{
    // input 4 integers a, b, c, d
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // find the product of last 2 digits of a, b, c, d
    long long product = a % 100 * b % 100 * c % 100 * d % 100;

    // handle case when product is less than 10
    if (product <= 9)
    {
        cout << "0" << product;
    }
    else
    {
        cout << product;
    }
}

void solution2()
{
    // input 4 integers a, b, c, d
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // calculate the last 2 digits of a, b, c, d separately
    long long a1 = a % 100;
    long long b1 = b % 100;
    long long c1 = c % 100;
    long long d1 = d % 100;

    // calculate the product of last 2 digits
    long long x = a1 * b1 * c1 * d1;

    // handle case when product is less than 10
    if (x % 100 <= 9)
    {
        cout << "0" << x % 100;
    }
    else
    {
        cout << x % 100;
    }
}

int main()
{
    solution1();
    return 0;
}