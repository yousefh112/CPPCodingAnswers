#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // Read the value of 'n' from the user
    int n;
    cin >> n;

    // Create a vector of strings with size 'n'
    vector<string> *v = new vector<string>(n);

    // Read 'n' strings from the user and store them in the vector
    for (int i = 0; i < n; i++)
    {
        cin >> (*v)[i]; // Note: to access the 'i'-th element of the vector, we need to use '(*v)[i]'
    }

    // Iterate over each string in the vector
    for (string i : *v)
    {
        // Calculate the length of the string
        int len = i.length();

        // Check if the length of the string is greater than 10
        if (len > 10)
        {
            // If the length is greater than 10, print the first character, the length minus 2, and the last character
            cout << i[0] << len - 2 << i[len - 1] << endl;
        }
        else
        {
            // If the length is not greater than 10, print the string as is
            cout << i << endl;
        }
    }

    // Free the memory allocated for the vector
    delete v;

    
    return 0;
}