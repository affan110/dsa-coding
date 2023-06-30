#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    vector<int> distinct_nums1, distinct_nums2;
    for (int num : set1) {
        if (set2.count(num) == 0) {
            distinct_nums1.push_back(num);
        }
    }

    for (int num : set2) {
        if (set1.count(num) == 0) {
            distinct_nums2.push_back(num);
        }
    }

    return {distinct_nums1, distinct_nums2};
}

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    vector<vector<int>> result = findDifference(nums1, nums2);

    cout << "Distinct elements in nums1: ";
    for (int num : result[0]) {
        cout << num << " ";
    }

    cout <<endl;

    cout << "Distinct elements in nums2: ";
    for (int num : result[1]) {
        cout << num << " ";
    }

    cout <<endl;

    return 0;
}
