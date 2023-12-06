#include <iostream>
using namespace std;
int main()
{ // Read input N
    long long N;
    cin >> N;

    // Calculate the summation using the formula N * (N + 1) / 2
    long long summation = N * (N + 1) / 2;

    // Print the result
    cout << summation << endl;

    return 0;
}