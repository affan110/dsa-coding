#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) 
{
    unordered_map<char, char> mp, mp2;
    for (int i = 0; i < s.length(); ++i) 
    {
        if (mp[s[i]] && mp[s[i]] != t[i]) 
            return false;
        if (mp2[t[i]] && mp2[t[i]] != s[i]) 
            return false;
        mp[s[i]] = t[i];
        mp2[t[i]] = s[i];
    }
    return true;
}

int main()
{
    string s = "foo";
    string t = "bar";
    
    if (isIsomorphic(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
