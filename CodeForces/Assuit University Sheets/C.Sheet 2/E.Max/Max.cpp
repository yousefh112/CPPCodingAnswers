#include <iostream>
#include <vector> // including vector library

using namespace std;

int main()
{
    // reading the number of elements in the vector
    int N;
    cin >> N;

    // creating a vector of integers with N elements
    vector<int> *v = new vector<int>(N);

    // reading the elements of the vector
    for (int i = 0; i < N; i++)
    {
        cin >> (*v)[i];
    }

    // initializing the maximum element
    int max = 0;

    // finding the maximum element in the vector
    for (int i : *v)
    {
        if (i > max)
        {
            max = i;
        }
    }

    // printing the maximum element
    cout << max << endl;

    // freeing the memory allocated for the vector
    delete v;

    return 0;
}