#include <iostream>
#include <vector>

using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
    if(coordinates.size() <= 1) return true;
    int x = coordinates[1][0] - coordinates[0][0];
    int y = coordinates[1][1] - coordinates[0][1];
    auto good = [&](vector<int>&v)->bool{
        return x * (v[1] - coordinates[1][1]) == y * (v[0] - coordinates[1][0]);
    };
    int n = coordinates.size();
    for(int i = 1; i < n; i++){
        if(!good(coordinates[i])) return false;
    }
    return true;
}

int main() {
    vector<vector<int>> coords = {{1, 2}, {3, 4}, {5, 6}};
    bool isStraightLine = checkStraightLine(coords);
    cout << "Is the given set of coordinates in a straight line? " << (isStraightLine ? "Yes" : "No") << endl;

    return 0;
}
