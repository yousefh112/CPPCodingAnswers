#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    // Print N in reversed order
    int reversedN = 0;
    int temp = N;
    while (temp > 0)
    {
        reversedN = reversedN * 10 + temp % 10;
        temp /= 10;
    }
    cout << reversedN << endl;

    // Check if N is a palindrome number
    int originalN = N;
    bool isPalindrome = true;
    while (originalN > 0)
    {
        if (originalN % 10 != reversedN % 10)
        {
            isPalindrome = false;
            break;
        }
        originalN /= 10;
        reversedN /= 10;
    }
    
    // Print "YES" if N is a palindrome number, otherwise print "NO"
    if (isPalindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}