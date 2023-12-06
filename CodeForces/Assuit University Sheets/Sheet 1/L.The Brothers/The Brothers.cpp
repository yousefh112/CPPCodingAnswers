#include <iostream>
#include <string>
using namespace std;

int main()
{ // Declare variables to store the names of the first and second brothers
    string F1, F2, S1, S2;
    // Input the names of the first and second brothers
    cin >> F1 >> S1;
    cin >> F2 >> S2;
    // Check if the last names (Surnames) of the two brothers are the same
    if (S1 == S2)
    { // If the last names are the same, print that they are brothers
        cout << "ARE Brothers" << endl;
    }
    else
    { // If the last names are different, print that they are not brothers
        cout << "NOT" << endl;
    }

    return 0;
}