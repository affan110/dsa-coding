#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
   cout<<arrayPairSum(v);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i];
    // }

//  int arrayPairSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         int result = 0;
//         for(int i = 0; i < n; i += 2)
//             result += nums[i];
//         return result;
//     }

}
int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result = 0;
        for(int i = 0; i < n; i += 2)
            result += nums[i];
        return result;
}