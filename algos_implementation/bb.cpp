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

	vector<int> output(n);

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size() - 1; j++) {

			if (v[j] > v[j + 1]) {
				int t;
				t = v[j + 1];
				output.push_back(t);
			}

		}
	}

	for (int i = 0; i < output.size(); i++) {
		cout << output[i] << " ";
	}

	cout << '\n';

	return 0;
}

