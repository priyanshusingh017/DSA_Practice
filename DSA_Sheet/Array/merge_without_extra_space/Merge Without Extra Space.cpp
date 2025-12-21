#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int> &a, vector<int> &b)
{
    int i = a.size() - 1, j = 0;

    // Step 1: Rearrange elements between arrays
    while (i >= 0 && j < b.size() && a[i] > b[j])
    {
        swap(a[i--], b[j++]);
    }

    // Step 2: Sort both arrays individually
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}

int main()
{
    vector<int> a = {1, 5, 9, 10, 15, 20};
    vector<int> b = {2, 3, 8, 13};

    mergeArrays(a, b);

    cout << "First Array: ";
    for (int num : a)
        cout << num << " ";
    cout << endl;

    cout << "Second Array: ";
    for (int num : b)
        cout << num << " ";
    cout << endl;

    return 0;
}