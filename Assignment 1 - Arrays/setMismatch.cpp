class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums);
};

vector<int> Solution::findErrorNums(vector<int>& nums) {
    int i, size = nums.size(), dupl=0, miss=0;
    vector<unsigned char> v(size, 0);
    vector<int> ans;
    for (i = 0; i < size; ++i) {
        ++v[nums[i]-1];
    }
    for(i = 0; i < size; ++i) {
        if (v[i] == 0) {
            miss = i+1;
        }
        if (v[i] > 1) {
            dupl = i+1;
        }
    }
    ans.push_back(dupl);
    ans.push_back(miss);
    return ans;
}