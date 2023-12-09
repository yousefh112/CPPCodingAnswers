#include <iostream>
#include <array>
using namespace std;

// Function to perform Bubble Sort on an array
void BubbleSort(array<int, 10>& arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            // If the current element is greater than the next one, swap them
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print the elements of an array
void PrintArray(const array<int, 10>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Declare and initialize an array of 10 integers
    array<int, 10> list = {1, 25, 87, 44, 12, 45, 74, 84, 20, 10};
    
    // Display the array before sorting
    cout << "Before Sorting " << endl;
    PrintArray(list);

    // Perform Bubble Sort
    BubbleSort(list);

    // Display the array after sorting
    cout << "After Sorting " << endl;
    PrintArray(list);

    return 0;
}
