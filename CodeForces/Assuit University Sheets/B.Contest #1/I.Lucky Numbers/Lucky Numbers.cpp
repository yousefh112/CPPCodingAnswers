#include <iostream>
using namespace std;


int main()
{
    // Declare an integer N
    int N;
    
    cin >> N;

    // Calculate the First digit (num1) and the remaining digits (num2) of N
    int num1 = N / 10; // First digit of N
    int num2 = N % 10; // Remaining digits of N

    // Check if num1 is divisible by num2 or num2 is divisible by num1
    if (num1 % num2 == 0 || num2 % num1 == 0)
    {
        // If the condition is true, print "YES"
        cout << "YES" << endl;
    }
    else
    {
        // If the condition is false, print "NO"
        cout << "NO" << endl;
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}