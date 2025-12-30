#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 48. Print Multiplication Table
void printMultiplicationTable(int n) {
	cout << "Multiplication table for " << n << ":\n";
	for (int i = 1; i <= 10; i++) {
		cout << n << " x " << i << " = " << n * i << endl;
	}
}

// 49. Count Consonants in a string
int countConsonants(const string& str) {
	int count = 0;
	for (char c : str) {
		char lower = tolower(c);
		if (isalpha(lower) && lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
			count++;
		}
	}
	return count;
}

// 50. Find Average of Numbers
double findAverage(const vector<int>& nums) {
	if (nums.empty()) return 0.0;
	int sum = 0;
	for (int x : nums) sum += x;
	return static_cast<double>(sum) / nums.size();
}

int main() {
	// 48. Multiplication Table
	int n;
	cout << "Enter a number for multiplication table: ";
	cin >> n;
	printMultiplicationTable(n);

	// 49. Count Consonants
	string str;
	cout << "Enter a string: ";
	cin.ignore();
	getline(cin, str);
	cout << "Number of consonants: " << countConsonants(str) << endl;

	// 50. Find Average
	int size;
	cout << "Enter number of elements: ";
	cin >> size;
	vector<int> nums(size);
	cout << "Enter elements: ";
	for (int i = 0; i < size; i++) cin >> nums[i];
	cout << "Average: " << findAverage(nums) << endl;

	return 0;
}
