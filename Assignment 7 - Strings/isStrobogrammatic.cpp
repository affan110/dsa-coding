#include <iostream>
#include <unordered_map>
using namespace std;

bool isStrobogrammatic(string num) {
    unordered_map<char, char> lut{{'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'}};
    for (int l = 0, r = num.size() - 1; l <= r; l++, r--) {
        if (lut.find(num[l]) == lut.end() || lut[num[l]] != num[r]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a number: ";
    cin >> input;

    bool result = isStrobogrammatic(input);

    if (result) {
        cout << "The number is strobogrammatic." << endl;
    } else {
        cout << "The number is not strobogrammatic." << endl;
    }

    return 0;
}
