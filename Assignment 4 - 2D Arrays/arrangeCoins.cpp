#include <iostream>

using namespace std;

int arrangeCoins(int n) {
    int level = 0, coin = 1;
    while (n >= coin) {
        n -= coin;
        coin++;
        level++;
    }
    return level;
}

int main() {
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;
    
    int result = arrangeCoins(n);
    cout << "number of complete rows of the staircase " << result << endl;
    
    return 0;
}
