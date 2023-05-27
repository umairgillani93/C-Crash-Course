#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	// longest contiguous sum
	int curr_sum = 0;
	int best_sum = 0;

	for (int i = 0; i < v.size(); i++) {
		curr_sum += v[i];

		if (curr_sum > best_sum) {
			best_sum = curr_sum;
		}

		else {
			curr_sum = 0;
		}
	}

	cout << best_sum << '\n';
	return 0;
}
