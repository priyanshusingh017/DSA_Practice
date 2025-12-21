#include <iostream>
#include <vector>
#include<set>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    // Using set to automatically handle duplicates and sorting
    set<int> s;

    // Insert all elements from first array into set
    // Duplicates are automatically ignored by set
    for (auto num : a)
    {
        s.insert(num);
    }

    // Insert all elements from second array into set
    // Any duplicates with first array or within second array are ignored
    for (auto num : b)
    {
        s.insert(num);
    }

    // Convert the set to vector
    // Set elements are already in sorted order and unique
    vector<int> res(s.begin(), s.end());

    return res;
}
int main()
{
    vector<int> arr1 = {10, 2, 6, 3};
    vector<int> arr2 = {2, 10, 10, 8};

    vector<int> result = findUnion(arr1, arr2);

    cout << "Union of two sorted arrays: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}