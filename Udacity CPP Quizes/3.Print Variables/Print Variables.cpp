/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream> 
using namespace std;

int main()
{
    int a; 
    short b;
    long c;
    char d;
    float e;
    double f;
    bool g;
    cout <<"The size of integer is : "<< sizeof(a)<<"\n";
    cout <<"The size of short is : "<< sizeof(b)<<"\n";
    cout <<"The size of long is : "<< sizeof(c)<<"\n";
    cout <<"The size of char is : "<< sizeof(d)<<"\n";
    cout <<"The size of float is : "<< sizeof(e)<<"\n";
    cout <<"The size of double is : "<< sizeof(f)<<"\n";
    cout <<"The size of bool is : "<< sizeof(g)<<"\n";

    
    
    return 0;
}
