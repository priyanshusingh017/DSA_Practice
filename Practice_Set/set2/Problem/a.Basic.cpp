#include <iostream>
using namespace std;

// 38. Print Natural Numbers
void printNaturalNumbers(int n) {
	cout << "Natural numbers from 1 to " << n << ": ";
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
	}
	cout << endl;
}

// 39. Sum of Natural Numbers
int sumOfNaturalNumbers(int n) {
	return n * (n + 1) / 2;
}

// 40. Check Positive or Negative
void checkPositiveNegative(int n) {
	if (n > 0)
		cout << n << " is Positive" << endl;
	else if (n < 0)
		cout << n << " is Negative" << endl;
	else
		cout << n << " is Zero" << endl;
}

// 41. Convert Celsius to Fahrenheit
double celsiusToFahrenheit(double c) {
	return (c * 9.0 / 5.0) + 32.0;
}

// 42. Convert Fahrenheit to Celsius
double fahrenheitToCelsius(double f) {
	return (f - 32.0) * 5.0 / 9.0;
}

int main() {
	int n;
	cout << "Enter n for natural numbers: ";
	cin >> n;
	printNaturalNumbers(n);
	cout << "Sum of first " << n << " natural numbers: " << sumOfNaturalNumbers(n) << endl;

	int num;
	cout << "Enter a number to check positive/negative: ";
	cin >> num;
	checkPositiveNegative(num);

	double c, f;
	cout << "Enter Celsius to convert to Fahrenheit: ";
	cin >> c;
	cout << c << " Celsius = " << celsiusToFahrenheit(c) << " Fahrenheit" << endl;

	cout << "Enter Fahrenheit to convert to Celsius: ";
	cin >> f;
	cout << f << " Fahrenheit = " << fahrenheitToCelsius(f) << " Celsius" << endl;

	return 0;
}
