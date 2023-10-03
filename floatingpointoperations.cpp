#include "std_lib_facilities.h"
int main() {
	double val1, val2;
	cout << "please input two floating-point values (seperated by space): ";
	cin >> val1 >> val2;

	//output results
	cout << "Value 1: " << val1 << "\n";
	cout << "Value 2: " << val2 << "\n";
	cout << "Smaller: " << (val1 < val2 ? val1 : val2) << "\n";
	cout << "Larger: " << (val1 > val2 ? val1 : val2) << "\n";
	cout << "Sum: " << val1 + val2 << "\n";
	cout << "Difference: " << val1 - val2 << "\n";
	cout << "Product: " << val1 * val2 << "\n";
	if (val2 != 0) {
		cout << "Ratio: " << val1 / val2 << "\n";
	}
	else {
		cout << "Cannot compute ratio because denominator is zed." << "\n";
	}
}