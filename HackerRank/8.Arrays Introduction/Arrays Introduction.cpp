#include <iostream>
#include <array>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Declare an array of size N
    int *arr = new int[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Reverse print the array elements
    for (int i = N - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
