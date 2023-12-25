#include <iostream>
using namespace std;

int main()
{
    // Read input N
    int N;
    cin >> N;

    // Print even numbers from 1 to N
    bool hasEvenNumber = false;
    for (int i = 2; i <= N; i += 2)
    {
        cout << i << endl;
        hasEvenNumber = true;
    }

    // If no even numbers were printed, print -1
    if (!hasEvenNumber)
    {
        cout << -1 << endl;
    }

    return 0;
}
