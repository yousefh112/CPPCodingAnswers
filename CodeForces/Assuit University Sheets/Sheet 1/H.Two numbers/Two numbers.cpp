#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Declare variables A, B, and result to store user input and calculation result
    double A, B, result;

    // Get input values from the user
    cin >> A >> B;

    // Perform the division operation
    result = A / B;

    // Calculate the floor, ceil, and round of the result
    double FloorResult = floor(result);
    double CeilResult = ceil(result);
    double RoundResult = round(result);

    // Output the results with appropriate labels
    cout << "floor " << A << " / " << B << " = " << FloorResult << endl;
    cout << "ceil " << A << " / " << B << " = " << CeilResult << endl;
    cout << "round " << A << " / " << B << " = " << RoundResult << endl;

    return 0;
}
