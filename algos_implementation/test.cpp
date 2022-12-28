#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a;
	for (int i = 0; i < 10; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}

	cout << "size " << a.size() << '\n';
	cout << "element at 0th index " << a[0] << '\n';
	
	return 0;
}

