#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool buddyStrings(string s, string goal) {
    if (s.length() != goal.length() || s.length() <= 1) {
        return false;
    }

    if (s == goal) {
        unordered_set<char> distinctChars(s.begin(), s.end());
        return distinctChars.size() < s.length();
    }

    vector<int> index;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != goal[i]) {
            index.push_back(i);
        }
    }

    if (index.size() != 2) {
        return false;
    }

    swap(s[index[0]], s[index[1]]);
    return s == goal;
}

int main() {
    string s, goal;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> goal;

    bool result = buddyStrings(s, goal);
    if (result) {
        cout << "The strings are buddy strings." << endl;
    } else {
        cout << "The strings are not buddy strings." << endl;
    }

    return 0;
}
