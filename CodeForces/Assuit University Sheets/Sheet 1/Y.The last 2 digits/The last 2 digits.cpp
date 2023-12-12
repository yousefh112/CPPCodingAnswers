#include <iostream>
#include <string>
using namespace std;

// Function to multiply two strings representing large numbers
string multiply(string num1, string num2) {
    // Initialize the result with zeros
    string result(num1.size() + num2.size(), '0');

    // Nested loops to perform multiplication
    for (int i = num1.size() - 1; i >= 0; i--) {
        for (int j = num2.size() - 1; j >= 0; j--) {
            // Calculate product and add to the current position
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + (result[i + j + 1] - '0');
            result[i + j + 1] = sum % 10 + '0';
            result[i + j] += sum / 10;
        }
    }

    // Remove leading zeros in the result
    for (int i = 0; i < result.size() - 1; i++) {
        if (result[i] != '0') break;
        result = result.substr(1);
    }

    return result;
}

int main()
{
    // Input four large numbers as strings
    string A, B, C, D;
    cin >> A >> B >> C >> D;

    // Multiply each pair of numbers and then multiply the results
    string res = multiply(multiply(A, B), multiply(C, D));

    // Print the last 2 digits from the final result
    cout << res.substr(res.length() - 2) << endl;

    return 0;
}
