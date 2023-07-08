#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> diStringMatch(string s) {
    vector<int> result;
    int n = s.size();
    result.reserve(n + 1);
    int l = 0, r = n;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'I')
            result.emplace_back(l++);
        else
            result.emplace_back(r--);
    }
    // l is equal to r
    result.emplace_back(l);

    return result;
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;

    vector<int> output = diStringMatch(input);

    cout << "Output: ";
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
