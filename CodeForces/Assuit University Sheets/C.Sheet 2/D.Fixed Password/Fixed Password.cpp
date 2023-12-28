#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    vector<int> v;
    while (cin >> N)
    {
        v.push_back(N);
        if (N == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}