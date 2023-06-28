#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (auto x : nums)
        ans ^= x;
    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1};
    int result = singleNumber(nums);
    cout << "The single number is: " << result <<endl;
    return 0;
}
