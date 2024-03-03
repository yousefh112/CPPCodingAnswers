/**
 * Checks if a given number is prime.
 * 
 * @param x The number to be checked.
 * @return True if the number is prime, false otherwise.
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long x;
    cin >> x;
    bool isPrime = true; // Flag variable to check if the number is prime
    for (long i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            isPrime = false; // Set the flag to false if the number is divisible by any other number
            break;
        }
    }
    if (isPrime)
    {
        cout << "YES" << endl; // Print "YES" if the number is prime
    }
    else
    {
        cout << "NO" << endl; // Print "NO" if the number is not prime
    }

    return 0;
}