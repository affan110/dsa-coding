#include <iostream>
#include <vector>

using namespace std;

int maxCount(int m, int n, vector<vector<int>>& ops) {
    int min_row = m;
    int min_col = n;
    
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i][0] < min_row)
            min_row = ops[i][0];
        if (ops[i][1] < min_col)
            min_col = ops[i][1];
    }
    
    return min_row * min_col;
}

int main() {
    int m = 3;
    int n = 3;
    vector<vector<int>> ops = {{2, 2}, {3, 3}};
    
    int result = maxCount(m, n, ops);
    
    cout << "The maximum count is: " << result << endl;
    
    return 0;
}
