#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
    vector<vector<int>> result;
    auto addRange = [&](int start, int end) {
        if (start > end)
            return;
        
        vector<int> range;
        range.push_back(start);
        range.push_back(end);
        result.push_back(range);
    };
    //lower bound
    addRange(lower, nums[0] - 1);
    //middle ranges
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i-1] + 1)
            addRange(nums[i-1] + 1, nums[i] - 1);
    }
    
    // upper bound
    addRange(nums.back() + 1, upper);
    
    return result;
}

int main() {
    vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0, upper = 99;
    
    vector<vector<int>> result = findMissingRanges(nums, lower, upper);
    
    // display
    for (const auto& range : result) {
        cout << "[" << range[0] << "," << range[1] << "] ";
        cout<<endl;
    }
    cout << endl;
    
    return 0;
}
