#include <iostream>
using namespace std;

int main()
{
    // Declare three variables 
    int long long a, b, SumWithoutCarry;

    // Input two decimal numbers
    cin >> a >> b;

    // Use bitwise XOR to perform addition without considering the carry
    SumWithoutCarry = a ^ b; // Sum of bits without considering carry

    // Output the result of addition
    cout << SumWithoutCarry << endl;

    return 0;
}
