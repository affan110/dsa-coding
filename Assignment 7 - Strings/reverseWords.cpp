#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseWords(string s) {
    s.push_back(' ');
    string ans, st;
    for (auto c : s) {
        if (c == ' ') {
            reverse(st.begin(), st.end());
            ans += st;
            ans += ' ';
            st.clear();
        } else {
            st.push_back(c);
        }
    }
    ans.pop_back();
    return ans;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    string reversed = reverseWords(input);
    cout << "Reversed sentence: " << reversed << endl;
    return 0;
}
