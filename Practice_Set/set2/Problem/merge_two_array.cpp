#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted arrays into one sorted array
vector<int> mergeArrays(vector<int>& arr1, vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;
    int n1 = arr1.size(), n2 = arr2.size();

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i++]);
        } else {
            merged.push_back(arr2[j++]);
        }
    }
    while (i < n1) merged.push_back(arr1[i++]);
    while (j < n2) merged.push_back(arr2[j++]);

    return merged;
}

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < n1; ++i) cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < n2; ++i) cin >> arr2[i];

    vector<int> merged = mergeArrays(arr1, arr2);

    cout << "Merged array:\n";
    for (int num : merged) cout << num << " ";
    cout << endl;

    return 0;
}