#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin >> size;
	vector<int> arr;
	
	for (int i = 0; i < size; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	cout << "Array is ready " << '\n';
	
	int best = 0;
	int sum = 0;

	for (int j = 0; j < size; j++) {
		sum = max(arr[j], sum + arr[j]);
		best = max(best, sum);
	}
	cout << best << '\n';
	return 0;
}
