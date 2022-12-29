#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int size;
	cin >> size;
	vector<int> v(size, 1);
	for (int i = 0; i < v.size(); i++) {
		cout << "item pushed: " << v[i] << '\n';
	}

	return 0;
}
