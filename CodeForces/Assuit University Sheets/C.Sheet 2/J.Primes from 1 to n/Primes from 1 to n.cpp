#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    // Check divisibility from 2 to square root of n
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    // Print all prime numbers between 1 and N
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}