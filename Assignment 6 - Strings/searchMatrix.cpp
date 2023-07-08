#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int row = 0;
    int col = cols - 1;

    while (row < rows && col > -1) {
        int cur = matrix[row][col];
        if (cur == target)
            return true;
        if (target > cur)
            row++;
        else
            col--;
    }

    return false;
}

int main() {
    // Example usage
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;

    bool found = searchMatrix(matrix, target);

    if (found)
        cout << "Target found in the matrix." << endl;
    else
        cout << "Target not found in the matrix." << endl;

    return 0;
}
