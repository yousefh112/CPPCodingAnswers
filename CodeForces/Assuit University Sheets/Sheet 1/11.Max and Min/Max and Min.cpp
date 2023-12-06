#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int A, B, C;
    // Input three numbers
    cin >> A >> B >> C;
    // Find and print the minimum number
    int minimum = min(A, min(B, C));
    // Find and print the maximum number
    int maximum = max(A, max(B, C));

    cout << minimum << " " << maximum << endl;
    return 0;
}