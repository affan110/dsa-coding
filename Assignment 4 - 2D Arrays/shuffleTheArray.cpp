#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n)
{
    vector<int> shuffled_nums(2 * n, 0);
    int a = 0, b = n;
    int c = 0, d = 1;
    
    for(int i = 0; i < n; i++)
    {
        shuffled_nums[c] = nums[a];
        shuffled_nums[d] = nums[b];
        a++;
        b++;
        c = c + 2;
        d = d + 2;
    }
    
    return shuffled_nums;
}

int main()
{
    
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;
    
    vector<int> shuffled = shuffle(nums, n);
    
    // Print the shuffled numbers
    for (int i = 0; i < shuffled.size(); i++)
    {
        cout << shuffled[i] << " ";
    }
    cout << endl;
    
    return 0;
}
