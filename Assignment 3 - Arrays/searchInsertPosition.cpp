#include <iostream>
#include <vector>
using namespace std;
int searchInsertPosition(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size();
    int mid;
    
    if (target > nums[high - 1]) {
        return high;
    }
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (nums[mid] == target) {
            return mid;
        }
        
        if (target < nums[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return low;
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    
    int result = searchInsertPosition(nums, target);
    cout <<"output:"<< result << endl;
    
    return 0;
}
