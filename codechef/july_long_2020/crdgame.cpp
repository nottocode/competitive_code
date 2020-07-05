#include<bits/stdc++.h>
using namespace std;

int giveSum(long a) {
	int sum = 0;
	while (a) {
		sum += a % 10;
		a = a / 10;
	}

	return sum;
}

void handleCase() {
	int chef = 0, morty = 0, n = 0, j, k;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> j >> k;
		long chefSum = giveSum(j);
		long mortySum = giveSum(k);

		if (chefSum > mortySum) {
			chef++;
		}
		else if(mortySum > chefSum) {
			morty++;
		}
		else {
			chef++;
			morty++;
		}
	}

	if (chef > morty) {
		cout << "0 " << chef << "\n";
	}
	else if (morty > chef) {
		cout << "1 " << morty << "\n";
	}
	else {
		cout << "2 " << chef << "\n";
	}

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
