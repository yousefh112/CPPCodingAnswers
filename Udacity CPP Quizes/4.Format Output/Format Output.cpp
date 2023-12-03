/*Formatting Output 
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    cout<<"print with set width = 10\n";
    cout << "ints" << setw(10);
    cout << "floats" << setw(10);
    cout << "Doubles" << endl;
    cout << a << setw(12);
    cout << b << setw(10);
    cout << c << endl;
    cout << aa << setw(12);
    cout << bb << setw(10);
    cout << cc << endl;
    cout << aaa << setw(12);
    cout << bbb << setw(10);
    cout << ccc << endl;
    cout<<"print with tabs\n";
    cout<<"Int"<<"\tFloats"<<"\tDoubles\n";
    cout<< aaa<<"\t"<< bbb<<"\t"<< ccc <<"\n"; 

    return 0;
}