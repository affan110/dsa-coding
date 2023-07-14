#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findAnagrams(string s, string p) {
    int s_len = s.length();
    int p_len = p.length();
    
    if (s.size() < p.size()) return {};
    
    vector<int> freq_p(26, 0);
    vector<int> window(26, 0);
    
    // First window
    for (int i = 0; i < p_len; i++) {
        freq_p[p[i] - 'a']++;
        window[s[i] - 'a']++;
    }
    
    vector<int> ans;
    if (freq_p == window) ans.push_back(0);
    
    for (int i = p_len; i < s_len; i++) {
        window[s[i - p_len] - 'a']--;
        window[s[i] - 'a']++;
        
        if (freq_p == window) ans.push_back(i - p_len + 1);
    }
    return ans;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";
    
    vector<int> anagramIndices = findAnagrams(s, p);
    
    cout << "Anagram Indices: ";
    for (int index : anagramIndices) {
        cout << index << " ";
    }
    cout << endl;
    
    return 0;
}
