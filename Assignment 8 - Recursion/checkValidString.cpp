#include <iostream>
#include <string>

using namespace std;

bool checkValidString(string s) {
    int cmin = 0, cmax = 0;
    for (char c : s) {
        if (c == '(')
            cmax++, cmin++;
        if (c == ')')
            cmax--, cmin = max(cmin - 1, 0);
        if (c == '*')
            cmax++, cmin = max(cmin - 1, 0);
        if (cmax < 0)
            return false;
    }
    return cmin == 0;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    bool isValid = checkValidString(input);

    if (isValid)
        cout << "The string is valid." << endl;
    else
        cout << "The string is not valid." << endl;

    return 0;
}
