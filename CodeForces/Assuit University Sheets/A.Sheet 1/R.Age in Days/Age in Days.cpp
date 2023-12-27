#include <iostream>
using namespace std;

int main() {
    // Read the total number of days
    long long N;
    cin >> N;

    // Calculate years from days
    long long years = N / 365;
    cout << years << " years" << endl;

    // Calculate months from remaining days after years
    long long months = (N - years * 365) / 30;
    cout << months << " months" << endl;

    // Calculate remaining days after years and months
    long long days = (N - (years * 365 + months * 30));
    cout << days << " days" << endl;

    return 0;
}
