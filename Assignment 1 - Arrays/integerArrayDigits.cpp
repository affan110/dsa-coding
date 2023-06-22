#include<iostream>
#include<vector>
using namespace std;
vector<int> addingOne(vector<int>& dig) {
    int n = dig.size();

    // Increment the least significant digit by one
    dig[n - 1] += 1;

    // Check for carry
    int carry = dig[n - 1] / 10;
    dig[n - 1] %= 10;

    // Iterate through the remaining digits
    for (int i = n - 2; i >= 0 && carry > 0; i--) {
        dig[i] += carry;
        carry = dig[i] / 10;
        dig[i] %= 10;
    }

    // If there is still a carry, insert it at the beginning
    if (carry > 0) {
        dig.insert(dig.begin(), carry);
    }

    return dig;
}

int main() {
    vector<int> dig = {1, 2, 3, 4, 5};

    vector<int> result = addingOne(dig);

    cout << "Output: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1)
            cout << ",";
    }
    cout << "]" <<endl;

    return 0;
}
