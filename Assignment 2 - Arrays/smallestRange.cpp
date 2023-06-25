#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int smallestRange(vector<int>& nums, int k) {
    int i, j, n, m, ans = 0;
    if (nums.size() <= 1) {
        return ans;
    } else {
        sort(nums.begin(), nums.end());

        n = nums[0] + k;
        m = nums[nums.size() - 1] - k;
        if (n <= m) {
            ans = m - n;
        } else {
            ans = 0;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {0,10};
    int k = 2;

    int result = smallestRange(nums, k);
    cout << "Smallest range: " << result <<endl;

    return 0;
}
