#include <iostream>
using namespace std;

int main()
{
    // Input two integers a and b
    int a, b;
    cin >> a >> b;

    // Check conditions and output "YES" or "NO"
    if (a + 1 == b || a - 1 == b || (a == b && a != 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
