#include <iostream>
using namespace std;

int main()
{ // declare and initialize variables for number of rows and columns
    int rows, cols;
    cols = 3; // setting number of columns to 3

    // declare and initialize counter variable
    int count = 0;

    // declare a 2D array of integers with dimensions rows x cols
    int matrix[rows][cols];

    // read in the number of rows from user input
    cin >> rows;

    // loop through each row of the matrix
    for (int i = 0; i < rows; i++)
    {
        // loop through each column of the current row
        for (int j = 0; j < cols; j++)
        {
            // read in the value at the current row and column
            cin >> matrix[i][j];
        }

        // check if any pair of adjacent columns in the current row have a value of 1
        if ((matrix[i][0] && matrix[i][1]) == 1 || (matrix[i][1] && matrix[i][2]) == 1 || (matrix[i][0] && matrix[i][2]) == 1)
        {
            // if so, increment the counter
            count++;
        }
    }

    // print the value of the counter to the console
    cout << count << endl;

    // function main returns 0 to indicate successful program execution
    return 0;
}