#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int cnt = 0;
    for(auto it : arr1) {
        int flag = 0;
        for(auto it1 : arr2) {
            if(abs(it - it1) > d) {
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    // Example usage
    vector<int> arr1 = {4,5,8};
    vector<int> arr2 = {10,9,1,8};
    int d = 2;
    int result = findTheDistanceValue(arr1, arr2, d);
    cout << "Result: " << result << endl;

    return 0;
}
