#include<iostream>
using namespace std;

// without recursion
int sumofdigts(int n){
    int temp = n;
    int sum = 0;
    while(temp){
        int digit = temp%10;
        sum+=digit;
        temp/=10;
    }
    return sum;
}
// with recursion
int sumof_digits(int n){
    // base case
    if(n==0) return 0;
    return n%10 + sumof_digits(n/10);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits (iterative): " << sumofdigts(n) << endl;
    cout << "Sum of digits (recursive): " << sumof_digits(n) << endl;
    return 0;
}