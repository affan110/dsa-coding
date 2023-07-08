#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
    int r1 = mat1.size(), c1 = mat1[0].size(), c2 = mat2[0].size();
    vector<vector<int>> res(r1, vector<int>(c2));
    unordered_map<int, vector<int>> mp;

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            if (mat1[i][j] != 0)
                mp[i].push_back(j);
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k : mp[i])
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    return res;
}

int main() {
    
    vector<vector<int>> mat1 = {
        {1,0,0},
        {-1,0,3}
    };
    vector<vector<int>> mat2 = {
        {7,0,0},
        {0,0,0},
        {0,0,1}
    };

    vector<vector<int>> result = multiply(mat1, mat2);

    cout << "Resultant Matrix:" << endl;
    for (const vector<int>& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
