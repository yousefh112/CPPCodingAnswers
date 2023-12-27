#include <iostream>
using namespace std;

int main()
{
    // Take the number of integers to add as input.
    int N;
    cin >> N;

    // Initialize the result variable to 0.
    int result = 0;

    // Use a for loop to iterate from 0 to N-1.
    for (int i = 0; i < N; i++)
    {
        // Increment the result variable by 1.
        result++;

        // Print the incremented result.
        cout << result << endl;
    }

    return 0;
}