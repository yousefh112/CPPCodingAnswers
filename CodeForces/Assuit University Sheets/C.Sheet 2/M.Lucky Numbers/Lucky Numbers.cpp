#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    bool foundLuckyNumber = false; 
    for (int i = A; i <= B; i++)
    {
        int temp = i;
        bool isLucky = true;
        while (temp > 0)
        {
            if (temp % 10 != 4 && temp % 10 != 7)
            {
                isLucky = false;
                break;
            }
            temp /= 10;
        }
        if (isLucky)
        {
            cout << i << " ";
            foundLuckyNumber = true; 
        }
    }

    if (!foundLuckyNumber)
    {
        cout << -1;
    }

    return 0;
}
