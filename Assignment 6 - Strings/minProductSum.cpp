#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minProductSum(vector<int>& A, vector<int>& B) {
    sort(begin(A), end(A));
    sort(begin(B), end(B), greater<>());
    int ans = 0;
    for (int i = 0; i < A.size(); ++i)
        ans += A[i] * B[i];
    return ans;
}

int main() {
   
    vector<int> A = {5,3,4,2};
    vector<int> B = {4,2,2,5};

    int productSum = minProductSum(A, B);

    cout << "The minimum product sum is: " << productSum << endl;

    return 0;
}
