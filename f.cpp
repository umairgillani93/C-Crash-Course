#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> nums() {

	vector<int> v = {1, 2, 3, 4, 5, 6};
	return v;
}

int main() {

	vector<int> v;

	v = nums();

	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << '\n';
	}

	return 0;
}
