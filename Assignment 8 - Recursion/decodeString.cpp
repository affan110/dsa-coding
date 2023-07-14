#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

string decodeString(string st) {
    int n = st.size(), i = 0;
    stack<char> s;
    string ans = "";

    while (i < n) {
        if (st[i] == ']') {
            string temp = "";
            while (!s.empty() && (s.top() >= 'a' && s.top() <= 'z')) {
                temp += s.top();
                s.pop();
            }
            reverse(temp.begin(), temp.end());
            s.pop();

            string temp2 = "";
            while (!s.empty() && (s.top() >= '0' && s.top() <= '9')) {
                temp2 += s.top();
                s.pop();
            }
            reverse(temp2.begin(), temp2.end());
            int x = stoi(temp2);
            temp2 = temp;
            x--;
            while (x--) {
                temp += temp2;
            }

            for (int k = 0; k < temp.size(); k++) {
                s.push(temp[k]);
            }
        } else {
            s.push(st[i]);
        }
        i++;
    }

    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string input = "3[a2[c]]";
    string result = decodeString(input);
    cout << "Decoded string: " << result << endl;
    return 0;
}
