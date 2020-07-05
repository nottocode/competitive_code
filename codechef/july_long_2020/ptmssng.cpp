#include<bits/stdc++.h>
using namespace std;

void handleCase() {
	int n = 0, x = 0, y = 0, xans = 0, yans = 0;

	cin >> n;
	for (int i = 0; i < 4 * n - 1; i++) {
		cin >> x >> y;
		xans ^= x;
		yans ^= y;
	}

	cout << xans << " " << yans << endl;
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
