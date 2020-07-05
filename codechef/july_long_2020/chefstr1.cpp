#include <bits/stdc++.h>
using namespace std;

void handleCase() {
	int n = 0, lastNumber = 0, currentNumber = 0;
	long long int sum = 0;
	
	cin >> n;
	cin >> lastNumber;

	for (int i = 0; i < n - 1; i++) {
		cin >> currentNumber;
		sum += abs(currentNumber - lastNumber) - 1;
		lastNumber = currentNumber;
	}
	cout << sum << "\n";
	return;
}

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		handleCase();
	}
	return 0;
}