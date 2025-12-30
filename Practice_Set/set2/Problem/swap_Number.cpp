#include <iostream>
using namespace std;

// Swap using a function
void swapWithFunction(int &a, int &b) {
    swap(a,b);
}

int main() {
    int x, y;

    // Input numbers
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // x - 6 and y - 7 

    // Swap using a function
    swapWithFunction(x, y);
    cout << "After swap (with function): x = " << x << ", y = " << y << endl;

    // here after swap x - 7 and y-6

    // Swap back without using a function
    int temp = x;
    x = y;
    y = temp;
    cout << "After swap (without function): x = " << x << ", y = " << y << endl;

    // back to original as x - 6 and y - 7

    return 0;
}