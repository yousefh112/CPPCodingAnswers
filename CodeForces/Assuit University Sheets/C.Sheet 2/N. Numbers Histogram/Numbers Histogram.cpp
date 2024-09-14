#include <iostream>
#include <vector>   
using namespace std; 

int main()
{
    int n;   // Variable to store the number of elements in the vector
    char s;  // Variable to store the character to be printed
    cin >> s; // Take input for the character 's' from the user
    cin >> n; // Take input for the integer 'n', which defines the size of the vector

    // Dynamically allocate a vector of integers with 'n' elements using a pointer
    vector<int> *a = new vector<int>(n);

    // Loop to take 'n' inputs and store them in the vector
    for (int i = 0; i < n; i++)
    {
        cin >> (*a)[i]; // Input each element into the vector using the pointer
    }

    // Enhanced for loop to iterate over the elements in the vector
    for (int j : *a)
    {
        // Nested loop to print the character 's' 'j' times
        for (int i = 0; i < j; ++i)
        {
            cout << s; // Print the character 's'
        }
        cout << endl; // Print a newline after printing the character 'j' times
    }

    // Clean up dynamically allocated memory
    delete a; // Avoid memory leaks by deallocating the vector

    return 0; // Return 0 to indicate successful execution
}
