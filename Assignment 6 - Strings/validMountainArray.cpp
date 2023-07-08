#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool validMountainArray(vector<int>& arr) {
    if (arr.size() < 3)
        return false;

    int maxVal = INT_MIN;
    int mountain = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            mountain = i;
        }
    }

    if (mountain == 0 || mountain == arr.size() - 1)
        return false;

    for (int i = 0; i < mountain; i++) {
        if (arr[i] >= arr[i + 1]) {
            return false;
        }
    }

    for (int j = mountain + 1; j < arr.size(); j++) {
        if (arr[j] >= arr[j - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
   
    vector<int> arr = {2,1};
    
    bool isValid = validMountainArray(arr);

    if (isValid)
        cout << "The array is a valid mountain array." << endl;
    else
        cout << "The array is not a valid mountain array." << endl;

    return 0;
}
