#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findLongestHS(vector<int>& nums) {
    int len = nums.size();
    int left = 0;
    int result = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < len; i++) {
        while (left < i && nums[i] - nums[left] > 1L) {
            left++;
        }
        if (nums[i] - nums[left] == 1L) {
            result = max(i - left + 1, result);
        }
    }
    return result;
}

int main() {
    // Create a vector of integers
    vector<int> numbers = {1, 3, 2, 2, 5, 2, 3, 7};

    // Calling the findLongestHS function
    int result = findLongestHS(numbers);

    // Print the result
    cout<< result <<endl;

    return 0;
}
