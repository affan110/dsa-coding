#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findMaxLength(vector<int>& nums) {
    vector<int> arr(2 * nums.size() + 1, INT_MIN);
    arr[nums.size()] = -1;
    int maxLen = 0, sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += (nums[i] == 0 ? -1 : 1);
        if (arr[sum + nums.size()] >= -1)
            maxLen = max(maxLen, i - arr[sum + nums.size()]);
        else
            arr[sum + nums.size()] = i;
    }

    return maxLen;
}

int main() {
    
    vector<int> nums = {0, 1};

    int maxLength = findMaxLength(nums);

    cout << "The maximum length of a contiguous subarray with an equal number of 0s and 1s is: " << maxLength << endl;

    return 0;
}
