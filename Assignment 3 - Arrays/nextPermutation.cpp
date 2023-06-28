#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    
    if (i >= 0) {
        
        int j = n - 1;
        while (j > i && nums[j] <= nums[i]) {
            j--;
        }
        
        // Swapping 
        swap(nums[i], nums[j]);
    }
    
    // Reverse the suffix starting from index i + 1
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};
    
    cout << "Input is: ";
    for (int num : nums) {
        cout << num << " ";
    }
    
    nextPermutation(nums);
    cout<<endl;
    cout << "next permutation is: ";
    for (int num : nums) {
        cout << num << " ";
    }
    
    return 0;
}
