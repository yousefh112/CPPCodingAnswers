#include <iostream>
#include <array>
using namespace std;

// Function to perform linear search on an array
void LinearSearch(array<int, 10> list, int key)
{
    for (int i = 0; i < list.size(); i++)
    {
        // Check if the current element is equal to the key
        if (key == list[i])
        {
            // If found, print the index and break the loop
            cout << "The key value found at index " << i << endl;
            break;
        }
    }
}

int main()
{
    // Initializing an array with 10 integers
    array<int, 10> list = {1, 5, 6, 7, 8, 30, 89, 3, 9, 16};

    // Variable to store the user-input key
    int x = 0;

    // Prompt the user to enter the element to search for
    cout << "Please enter the element you want to find: " << endl;
    cin >> x;

    // Call the LinearSearch function to search for the key in the array
    LinearSearch(list, x);

    return 0;
}
