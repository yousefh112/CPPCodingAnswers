#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> *A = new vector<int>(N);
    for (int i = 0; i < N; i++)
    {
        cin >> (*A)[i];
    }

    for (int i : *A)
    {
        long long f = 1;
        for (int j = 1; j <= i; j++)
        {

            f *= j;
        }
        cout << f << endl;
    }
    delete A;
    return 0;
}