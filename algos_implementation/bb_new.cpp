#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> new_v;
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	for (int j = 0; j < v.size(); j++) {
		for (int k = 0; k < v.size() - 1; k++) {
			if (v[k] > v[k + 1]) {
				new_v.push_back(v[k + 1]);
			}
			else {
				new_v.push_back(v[k]);
			}
		}
	}

	for (auto x: new_v) {
		cout << x << " " ;
	}

	cout << '\n';
	return 0;
}

