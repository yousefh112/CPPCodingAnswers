#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Vector of vectors to represent the variable-length arrays
    vector<vector<int>> variableArrays;

    // Input the variable-length arrays
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        vector<int> array(k);
        for (int j = 0; j < k; ++j) {
            cin >> array[j];
        }
        variableArrays.push_back(array);
    }

    // Process queries
    for (int query = 0; query < q; ++query) {
        int i, j;
        cin >> i >> j;

        // Print the result based on the query
        cout << variableArrays[i][j] << endl;
    }

    return 0;
}
