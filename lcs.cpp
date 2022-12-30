#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin >> size;
	vector<int> v;
	for (int i = 0; i <= size; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int j = 0; j < v.size(); j++) {
		cout << v[j] << '\n';
	}
	cout << '\n';
	cout << '\n';

	int best;
	int sum;
	best = 0;
	sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum = max(v[i], sum + v[i]);
		best = max(sum, best);
	}
	cout << best << '\n';
	return best;
}
