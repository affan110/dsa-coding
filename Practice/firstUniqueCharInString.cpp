#include <iostream>
#include <unordered_map>
using namespace std;
int firstUniqCharInString(string s) {
    unordered_map<char, int> frequency;
    for (char c : s) {
        frequency[c]++;
    }
    for (int i = 0; i < s.length(); i++) {
        if (frequency[s[i]] == 1) {
            return i;
        }
    }
 return -1; 
}

int main() {
    string str = "leetcode";
    cout << "Input: " << str << endl;
    cout << "Output: " << firstUniqCharInString(str) << endl;
    return 0;
}
