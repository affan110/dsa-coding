#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int result = 0;
    int size = nums.size();
    for (int i = 0; i < size - 1; i += 2) {
        result += nums[i];
    }
    return result;
}

int main() {
    vector<int> nums = {1, 4, 3, 2};
    int sum = arrayPairSum(nums);
    
    cout << "Sum of minimum pairs: " << sum << endl;

    return 0;
}
