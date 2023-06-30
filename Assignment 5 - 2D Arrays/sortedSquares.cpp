#include <iostream>
#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result(nums.size());
    int left = 0;
    int right = nums.size() - 1;
    int index = nums.size() - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare >= rightSquare) {
            result[index] = leftSquare;
            left++;
        } else {
            result[index] = rightSquare;
            right--;
        }

        index--;
    }

    return result;
}

int main() {
    // Example usage
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> sortedSquaresResult = sortedSquares(nums);

    // Print the sorted squares
    for (int i = 0; i < sortedSquaresResult.size(); i++) {
        cout << sortedSquaresResult[i] << " ";
    }
    cout << endl;

    return 0;
}
