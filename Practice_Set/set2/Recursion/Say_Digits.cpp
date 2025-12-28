#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void saydigit(string arr[], int n) {
    if(n == 0) {
        cout << arr[0] << " ";
        return;
    }
    
    int digit = n % 10;
    n = n / 10;
    
    if(n != 0) {  // Only recurse if more digits
        saydigit(arr, n);
    }
    
    cout << arr[digit] << " ";
}

int main() {
    string arr[10] = {"zero", "one", "two", "three", "four", 
                      "five", "six", "seven", "eight", "nine"};
    
    cout << "Testing improved saydigit function:\n\n";
    
    int test_cases[] = {0, 5, 10, 25, 100, 432, 1000, 12345};
    
    for(int num : test_cases) {
        cout << "saydigit(arr, " << num << ") = \"";
        saydigit(arr, num);
        cout << "\"" << endl;
    }
    
    return 0;
}