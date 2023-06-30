#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    vector<vector<int>> ans(m, vector<int>(n));
    int k = 0;
    
    if (m * n != original.size()) {
        return {};
    } else {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = original[k];
                k++;
            }
        }
        return ans;
    }
}

int main() {
    vector<int> original = {1, 2, 3, 4, 5, 6};
    int m = 2;
    int n = 3;

    vector<vector<int>> result = construct2DArray(original, m, n);

    // Print the constructed 2D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
