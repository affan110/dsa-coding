#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int>& nums) {
    int n = nums.size();
    int nonZeroEle = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[nonZeroEle] = nums[i];
            nonZeroEle++;
        }
    }
    for (int i = nonZeroEle; i < n; i++) {
        nums[i] = 0;
    }
}

void display(vector<int>& nums) {
    for (int i=0;i<nums.size();i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    
    display(nums);
    //calling function
    moveZeroesToEnd(nums);

    cout << "Final Output: ";
    //print
    display(nums);

    return 0;
}
