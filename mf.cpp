#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin >> size;
	vector<int> v;
	for (int i = 0; i < size; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());
	cout << "sorted" << '\n';
	int sum = 0;
	int best = 0;
	
	for (int j = 0; j < v.size() - 1; j++) {
		sum = max(j, sum + j);
		best = max(best, sum);
	}
	
	cout << best << '\n';
	return 0;
}
