#include <iostream>
#include <vector>

int search(const std::vector<int>& nums, int target) {
    int lo = 0, hi = nums.size() - 1;

    while (lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;

        if (target < nums[mid]) {
            hi = mid - 1;
        } else {
            lo = mid;
        }
    }

    return nums[lo] == target ? lo : -1;
}

int main() {
    std::vector<int> nums = {1, 3, 5, 7, 9};
    int target = 5;

    int result = search(nums, target);
    std::cout << "Index of target: " << result << std::endl;

    return 0;
}
