#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumProductOfThreeNum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    // Maximum product can be either the product of the three largest numbers
    // or the product of the two smallest numbers and the largest number
    int option1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    
    int option2 = nums[0] * nums[1] * nums[n - 1];

    return max(option1, option2);
}

int main() {
    vector<int> nums = {1, 2, 3};
    //calling function
    int result = maximumProductOfThreeNum(nums);
    cout << "Maximum product: " << result <<endl;

    return 0;
}
