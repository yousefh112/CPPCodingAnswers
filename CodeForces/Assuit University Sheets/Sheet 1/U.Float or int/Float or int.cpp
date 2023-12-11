#include <iostream>
#include <string>
using namespace std;

int main()
{
    string N1;
    cin >> N1;
    char N2 = N1.find(".");
    string N3 = N1.substr(N2);
    int N4 = stoi(string(N3, 1));
    string N5 = N1.substr(0, N2);
    int N6 = stoi(string(N5, 1));

    if (N4 == 000)
    {
        cout << "int " << N5 << endl;
    }
    else
    {
        cout << "float " << N5 << " 0." << N4 << endl;
    }

    return 0;
}