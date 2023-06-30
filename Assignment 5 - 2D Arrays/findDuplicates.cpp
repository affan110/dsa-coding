#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> p;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1;) {
        if (nums[i] == nums[i + 1]) {
            p.push_back(nums[i]);
            i = i + 2;
        }
        else {
            i++;
        }
    }
    return p;
}

int main() {
    // Example usage
    vector<int> nums = { 4,3,2,7,8,2,3,1};
    vector<int> duplicates = findDuplicates(nums);

    // Print the duplicates
    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
