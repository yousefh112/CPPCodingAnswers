#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Reading the size of the array
    int N;
    cin >> N;

    // Creating a dynamic array with the specified size
    vector<int> *A = new vector<int>(N);

    // Iterating through the array elements and getting user input
    for (int i = 0; i < N; i++)
    {
        cin >> (*A)[i];
    }

    // Variables to store the count of even, odd, positive, and negative numbers
    int Even = 0;
    int Odd = 0;
    int Positive = 0;
    int Negative = 0;

    // Iterating through the array and counting the occurrences of even, odd, positive, and negative numbers
    for (int i : *A)
    {
        if (i % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }

        if (i > 0)
        {
            Positive++;
        }
        else if (i < 0)
        {
            Negative++;
        }
    }

    // Printing the count of even, odd, positive, and negative numbers
    cout << "Even: " << Even << endl;
    cout << "Odd: " << Odd << endl;
    cout << "Positive: " << Positive << endl;
    cout << "Negative: " << Negative << endl;

    return 0;
}