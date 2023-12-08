#include <iostream>
#include <array>
using namespace std;

// Function to perform Selection Sort on the given array
void SelectionSort(array<int, 10>& arr, int n)
{
    // Traverse through all array elements
    for (int i = 0; i < n - 1; i++)
    {
        // Find the index of the minimum element in the unsorted part of the array
        int MinIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[MinIndex])
            {
                MinIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[i], arr[MinIndex]);
    }
}

// Function to print the elements of the array
void PrintArray(const array<int, 10>& arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Initialize an array
    array<int, 10> list = {1, 9, 5, 7, 6, 3, 2, 4, 10, 8};

    // Display the array before sorting
    cout << "Before Sorting " << endl;
    PrintArray(list, list.size());

    // Perform Selection Sort
    SelectionSort(list, list.size());

    // Display the array after sorting
    cout << "After Sorting " << endl;
    PrintArray(list, list.size());

    return 0;
}
