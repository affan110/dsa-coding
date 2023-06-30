#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int>& nums) {
    if (nums.size() == 1)
        return nums[0];

    int left = 0, right = nums.size() - 1;

    if (nums[right] > nums[0])
        return nums[0];

    while (right >= left) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid + 1])
            return nums[mid + 1];

        if (nums[mid - 1] > nums[mid])
            return nums[mid];

        if (nums[mid] > nums[0])
            left = mid + 1;
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {3,4,5,1,2};
    int minNum = findMin(nums);
    cout << "The minimum number is: " << minNum << endl;
    return 0;
}
