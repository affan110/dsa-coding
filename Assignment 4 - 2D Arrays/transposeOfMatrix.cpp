#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size(); 
    vector<vector<int>> transposed(n, vector<int>(m));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    return transposed;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Transpose the matrix
    vector<vector<int>> transposedMatrix = transpose(matrix);

    // Print the transposed matrix
    cout << "Transposed Matrix:\n";
    for (const auto& row : transposedMatrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << "\n";
    }

    return 0;
}
