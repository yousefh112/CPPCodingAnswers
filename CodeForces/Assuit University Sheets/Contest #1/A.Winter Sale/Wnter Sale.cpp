#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float DiscountPercentage;  // Variable for discount percentage (X)
    float DiscountedPrice;     // Variable for discounted price (P)
    float OriginalPrice;       // Variable for the original price
    
    // Read input values for DiscountPercentage (X) and DiscountedPrice (P)
    cin >> DiscountPercentage >> DiscountedPrice;

    // Calculate the original price using the correct formula
    OriginalPrice = DiscountedPrice / (1 - DiscountPercentage / 100);  // Correct formula: P / (1 - X / 100)

    // Print the result with fixed precision (two decimal places)
    cout << fixed << setprecision(2) << OriginalPrice << endl;

    return 0;
}
