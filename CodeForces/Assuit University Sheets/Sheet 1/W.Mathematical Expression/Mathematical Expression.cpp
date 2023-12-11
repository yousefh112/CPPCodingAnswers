#include <iostream>
using namespace std;
int main()
{
    long long A, B, C, result;
    char S, Q;

    cin >> A >> S >> B >> Q >> C;

    switch (S)
    {
    case '+':
        result = A + B;
        if (result == C)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << result << endl;
        }
        break;
    case '-':
        result = A - B;
        if (result == C)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << result << endl;
        }
        break;
    case '*':
        result = A * B;
        if (result == C)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << result << endl;
        }
        break;

    default:

        break;
    }

    return 0;
}
