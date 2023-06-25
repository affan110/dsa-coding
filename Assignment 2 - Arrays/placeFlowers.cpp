#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    for (int i = 0; i < flowerbed.size(); i++) {
        if (flowerbed[i] == 0 &&
            (i == 0 || flowerbed[i - 1] == 0) &&
            (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {

            flowerbed[i] = 1;
            n--;
        }

        if (n <= 0) {
            return true;
        }
    }
    return false;
}

int main() {
    // Example usage
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    bool result = canPlaceFlowers(flowerbed, n);
    cout << "Can place flowers: " << (result ? "true" : "false") <<endl;

    return 0;
}
