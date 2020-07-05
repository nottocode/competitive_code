#include<bits/stdc++.h>
using namespace std;

void handleCase() {
	int n = 0, x = 0, y = 0;
	map<long, long> xmap, ymap;
	std::map<long, long>::iterator itr;

	cin >> n;
	for (int i = 0; i < 4 * n - 1; i++) {
		cin >> x >> y;

		itr = xmap.find(x);
		if (itr == xmap.end() || itr -> second == 0) {
			xmap[x] = 1;
		}
		else {
			xmap[x] = 0;
		}

		itr = ymap.find(y);
		if (itr == ymap.end() || itr -> second == 0) {
			ymap[y] = 1;
		}
		else {
			ymap[y] = 0;
		}
	}

	for (itr = xmap.begin(); itr != xmap.end(); itr++) {
		if (itr -> second == 1) {
			x = itr -> first;
		}
	}



	for (itr = ymap.begin(); itr != ymap.end(); itr++) {
		if (itr -> second == 1) {
			y = itr -> first;
		}
	}

	cout << x << " " << y << endl;
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