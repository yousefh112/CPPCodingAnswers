#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    size_t dotIndex = input.find(".");
    
    if (dotIndex == string::npos) {
        // No decimal point found, treat it as an integer
        cout << "int " << input << endl;
    } else {
        // Decimal point found, treat it as a float
        string integerPart = input.substr(0, dotIndex);
        string decimalPart = input.substr(dotIndex + 1);
        int decimalValue = stoi(decimalPart);

        if (decimalValue == 0) {
            // No decimal value, treat it as an integer
            cout << "int " << integerPart << endl;
        } else {
            // Non-zero decimal value, treat it as a float
            cout << "float " << integerPart << " 0." << decimalValue << endl;
        }
    }

    return 0;
}
