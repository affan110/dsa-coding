#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for (int idx = 0; idx < nums.size() - 1; idx++) {
        if (nums[idx] == nums[idx + 1])
            return true;
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

    bool result = containsDuplicate(nums);
    cout << "Contains duplicate: " << (result ? "true" : "false") <<endl;

    return 0;
}
