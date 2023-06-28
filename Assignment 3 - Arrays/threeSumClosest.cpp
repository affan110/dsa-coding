#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int closestSum = INT_MAX;
    int curSum = 0;

    for (int i = 0; i < nums.size() - 2; i++) {
        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            curSum = nums[i] + nums[left] + nums[right];
            if (curSum == target) {
                return curSum;
            }
            else if (abs(target - curSum) < abs(target - closestSum)) {
                closestSum = curSum;
            }
            if (curSum <= target) {
                left += 1;
                while (nums[left] == nums[left - 1] && left < right) {
                    left += 1;
                }
            } else {
                right -= 1;
            }
        }
    }
    return closestSum;
}

int main() {
    
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = threeSumClosest(nums, target);
    cout << "Closest sum: " << result << endl;

    return 0;
}
