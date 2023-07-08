#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> findOriginalArray(vector<int>& A) {
    if (A.size() % 2)
        return {};

    unordered_map<int, int> c;
    for (int a : A)
        c[a]++;
    
    vector<int> keys;
    for (auto it : c)
        keys.push_back(it.first);
    
    sort(keys.begin(), keys.end(), [](int i, int j) { return abs(i) < abs(j); });
    
    vector<int> res;
    for (int x : keys) {
        if (c[x] > c[2 * x])
            return {};
        
        for (int i = 0; i < c[x]; ++i, c[2 * x]--)
            res.push_back(x);
    }
    
    return res;
}

int main() {
    
    vector<int> A = {1,3,4,2,6,8};

    vector<int> originalArray = findOriginalArray(A);

    if (originalArray.empty()) {
        cout << "No original array found." << endl;
    } else {
        cout << "Original array: ";
        for (int num : originalArray) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
