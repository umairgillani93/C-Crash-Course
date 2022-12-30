#include  <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin >> size;
	bool ok;
	vector<int> v;
	for (int i = 0; i < size; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	for (int j = 0; j < size; j++) {
		cout << v[j] << '\n';
	}

	for (int k = 0; k < size - 1; k++) {
		if (v[k] == v[k + 1]) {
			cout << "1" <<  '\n';
			return 0;
		}
	}
	
	cout << "-1" << '\n';
	return -1;
}
