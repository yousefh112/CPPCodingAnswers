#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{ // Assigning our variables as string
    string N1, M1;
    // inputing our variables
    cin >> N1 >> M1;
    // grabing the last digit from the first number using [] method
    // here we used N1.size() - 1 to grab the last item in N1 string
    char N2 = N1[N1.size() - 1];
    // Using stoi() which creates a string containing a single character N2.and converts it to int
    int N3 = stoi(string(1, N2));
    // grabing the last digit from the second number using .at() method
    // here we used M1.size() - 1 to grab the last item in M1 string
    char M2 = M1.at(M1.size() - 1);
    // Using stoi() which creates a string containing a single character M2.and converts it to int
    int M3 = stoi(string(1, M2));
    // printing  the summation of their last digits.
    cout << N3 + M3 << endl;
    return 0;
}