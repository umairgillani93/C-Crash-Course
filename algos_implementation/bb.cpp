#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void swap(int &x, int &y) {
	int z;
	z = x;
	x = y;
	y = z;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int j = 0; j < v.size(); j++) {
		for (int k = 0; k < v.size() - 1; k++) {
			if (v[k] > v[k + 1]) {
				swap(v[k], v[k + 1]);
			}

			else {continue;}
		}
	}

	for (auto x: v) {
		cout << x << " ";
	}
	cout << '\n';

	return 0;
}

