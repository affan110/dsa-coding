#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string reverseStr(string s, int k)
{
    int n = s.length();
    if (k > n)
    {
        reverse(s.begin(), s.end());
        return s;
    }

    int j = 0;
    string ans;

    for (int i = 0; i < n; i += (2 * k))
    {
        string temp = s.substr(i, k);
        reverse(temp.begin(), temp.end());
        ans += temp;

        j += k;
        while (j < n && j < (i + 2 * k))
        {
            ans.push_back(s[j]);
            j++;
        }
    }
    return ans;
}

int main()
{
    string input;
    int k;

    // Get input from the user
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the value of k: ";
    cin >> k;

    // Reverse the string
    string reversed = reverseStr(input, k);

    // Print the output
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
