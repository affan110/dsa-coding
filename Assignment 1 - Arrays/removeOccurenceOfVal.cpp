#include<iostream>
#include<vector>
using namespace std;
int removeOccurenceVal(vector<int>& nums, int val) {
    int k = 0; // Number of elements not equal to val

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    vector<int> nums = {3,2,2,3,3,2,2,2,3};
    int val = 2;

    int result = removeOccurenceVal(nums, val);
    cout << "Output: " << result << ", nums = [";
    for (int i = 0; i < result; i++) {
        cout << nums[i];
        if (i != result - 1)
            cout << ",";
    }
    cout << ",_*,_*]" <<endl;

    return 0;
}