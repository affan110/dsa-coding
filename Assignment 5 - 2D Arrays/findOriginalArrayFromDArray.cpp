#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> findOriginalArray(vector<int>& changed) {
    int n = changed.size();
    if (n % 2 == 1) return {};
    sort(changed.begin(), changed.end());
    vector<int> ans;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[changed[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (mp[changed[i]] == 0) continue;
        if (mp[changed[i] * 2] == 0) return {};
        ans.push_back(changed[i]);
        mp[changed[i]]--;
        mp[changed[i] * 2]--;
    }
    return ans;
}

int main() {
    vector<int> changed = {1,3,4,2,6,8};
    vector<int> original = findOriginalArray(changed);

    if (original.empty()) {
        cout << "No valid original array exists." << endl;
    } else {
        cout << "Original Array: ";
        for (int num : original) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
