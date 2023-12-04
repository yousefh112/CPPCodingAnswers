#include <iostream>
using namespace std;

int main(){

    int w;
    // asking for the watermelon weight 
    cin >> w;
    // 
    //We check if the weight is an even number and greater than or equal to 3. 
    //This is because if the weight is 1 or 2, it's impossible to divide it into two parts, each weighing even kilos
         if (w >= 3 && w % 2 == 0)
        {
            cout << "YES" << endl;
        } 
        else
        {
            cout << "NO" << endl;
        }
    return 0;
}