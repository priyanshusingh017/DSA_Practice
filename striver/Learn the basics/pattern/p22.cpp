#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int size = 2 * N - 1;
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;
            int val = N - min(min(top, bottom), min(left, right));
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}