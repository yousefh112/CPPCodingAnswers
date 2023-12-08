#include <iostream>
#include <array>
using namespace std;

// Function for Binary Search
int BinarySearch(array<int, 10> arr, int left, int right, int key)
{
    int middle = (left + right) / 2;

    // Loop until the left index is less than or equal to the right index
    while (left <= right)
    {
        // Check if the middle element is the key
        if (arr[middle] == key)
        {
            return middle; // Key found, return the index
        }

        // If the key is less than or equal to the middle element, update the right index
        if (key <= arr[middle])
        {
            right = middle - 1;
            middle = (left + right) / 2;
        }
        else // If the key is greater than the middle element, update the left index
        {
            left = middle + 1;
            middle = (left + right) / 2;
        }
    }

    return -1; // Key not found, return -1
}

// Main function
int main()
{
    // Initialize an array with sorted values
    array<int, 10> list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Get the desired element from the user
    int desired_Element;
    cout << "Please Enter the desired element: " << endl;
    cin >> desired_Element;

    // Initialize left and right indices for the binary search
    int left = list.front();
    int right = list.back();

    // Call the BinarySearch function
    int result = BinarySearch(list, left, right, desired_Element);

    // Output the result
    if (result == -1)
    {
        cout << "Key NOT Found" << endl;
    }
    else
    {
        cout << "Key is: " << list[result] << " Found at index: " << result << endl;
    }

    return 0;
}
