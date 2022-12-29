#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
		cout << arr[i] << '\n';
	}
	
	int best = 0;
	int sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		sum = max(arr[i], sum + arr[i]);
		best = max(best, sum);
	}
	cout << best << '\n';
	return 0;
}
