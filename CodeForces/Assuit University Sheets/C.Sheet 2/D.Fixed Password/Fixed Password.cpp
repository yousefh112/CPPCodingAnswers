#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // variable to store user input
    int N;

    // while loop to take inputs until 1999 is encountered
    while (true)
    {

        // check if the current input is 1999
        if (N == 1999)
        {
            // print "Correct" and exit the loop
            cout << "Correct" << endl;
            break;
        }
        else
        {
            // print "Wrong" for inputs that are not 1999
            cout << "Wrong" << endl;
        }
    }

    return 0;
}