#include <iostream>
using namespace std;

int main() {
    // Input intervals A, B, C, D
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate the boundaries of the intersection
    long long E = max(A, C);
    long long F = min(B, D);

    // Check if there is an intersection
    if (E <= F) {
        // Print the boundaries of the intersection
        cout << E << " " << F << endl;
    } else {
        // Print -1 if there is no intersection
        cout << -1 << endl;
    }

    return 0;
}
