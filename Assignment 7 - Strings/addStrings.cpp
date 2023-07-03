#include <iostream>
#include <algorithm>

using namespace std;

string addStrings(string num1, string num2) {
    string ans;
    int n = max(num1.size(), num2.size()), t = 0;
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    for(int i=0; i<n; i++) {
        if(i >= num1.size()) t += num2[i] - '0';
        else if(i >= num2.size()) t += num1[i] - '0';
        else t += (num1[i]-'0') + (num2[i]-'0');
        ans += t % 10 + '0';
        t /= 10;
    }
    if(t) ans += t + '0';
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string num1 = "11";
    string num2 = "123";
    string result = addStrings(num1, num2);
    cout << "Result: " << result << endl;
    return 0;
}
