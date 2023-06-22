bool containsDuplicate(vector<int>& nums) {
        // Sort the nums...
        sort(nums.begin(), nums.end());
        // Traverse all the elements through the loop...
        for(int idx = 0; idx < nums.size() - 1; idx++) {
            // Check the duplicate element...
            if(nums[idx] == nums[idx + 1])
                return true;
        }
       
        return false;
    }