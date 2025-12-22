#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    // If no flowers need to be planted, it's always possible
    if (n == 0) return true;

    int count = 0;
    int size = flowerbed.size();
    for (int i = 0; i < size; i++) {
        // If current plot is empty, check both neighbors
        if (flowerbed[i] == 0) {
            // Left neighbor is empty or i is the first plot
            bool isleftempty = (i == 0) || (flowerbed[i - 1] == 0);
            // Right neighbor is empty or i is the last plot
            bool isrightempty = (i == size-1) || (flowerbed[i + 1] == 0);

            if (isleftempty && isrightempty) {
                flowerbed[i] = 1; // Plant a flower; marks plot to avoid double-counting
                count++;

                // Early exit once we reach n flowers
                if (count >= n) return true;
            }
        }
    }
    return count >= n;
}

int main() {
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    if (canPlaceFlowers(flowerbed, n)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}