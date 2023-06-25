#include <iostream>
#include <vector>
using namespace std;
bool isMonotonic(vector<int>& A) {
    int store = 0;
    for (int i = 0; i < A.size() - 1; ++i) {
        int c = A[i] - A[i+1];
        if (c != 0) {
            if (c != store && store != 0)
                return false;
            store = c;
        }
    }

    return true;
}

int main() {
    vector<int> A = {1,2,2,3};

    //calling function
    bool res = isMonotonic(A);
    cout << "Is monotonic: " << (res ? "true" : "false") <<endl;

    return 0;
}
