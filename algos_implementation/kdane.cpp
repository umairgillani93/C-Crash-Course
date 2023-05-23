#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> A(n);

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	int curr_sum;
	int max_sum;

	for (int i = 0; i < A.size(); i++) {
		curr_sum = A[i];

		if (curr_sum > max_sum) {
			max_sum = curr_sum;
		}

		if (curr_sum < 0) {
			curr_sum = 0;

		}
	}
	cout << max_sum << '\n';
	return 0;
}

