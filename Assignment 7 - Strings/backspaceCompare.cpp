#include <iostream>
#include <string>

using namespace std;

bool backspaceCompare(string s, string t) {
    string new_s = "", new_t = "";
    int count = 0;
    
    for(int i = s.length() - 1; i >= 0; i--) {
        if(s[i] == '#')
            count++;
        else {
            if(count > 0)
                count--;
            else
                new_s += s[i];
        }
    }
    
    count = 0;
    
    for(int i = t.length() - 1; i >= 0; i--) {
        if(t[i] == '#')
            count++;
        else {
            if(count > 0)
                count--;
            else
                new_t += t[i];
        }
    }
    
    return (new_s == new_t);
}

int main() {
    string input_s, input_t;
    
    cout << "Enter string s: ";
    getline(cin, input_s);
    
    cout << "Enter string t: ";
    getline(cin, input_t);
    
    bool result = backspaceCompare(input_s, input_t);
    
    if(result)
        cout << "The strings are equal after applying backspaces.";
    else
        cout << "The strings are not equal after applying backspaces.";
    
    return 0;
}
