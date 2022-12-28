#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int ls(vector<int> arr, int n) {
	// traverses the passed array and 
	// returns the index of n; if present
	// else returns -1
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == n) {
			return i;
		}
		else {continue;}
	}
	return -1;
}

int main() {
	int n;
	int size;
	cin >> n;
	cin >> size;
	vector<int> a; // initiate empty vector
	
	for (int i = 0; i < size; i++) {
		int m;
		cin >> m;
		a.push_back(m);
	}

	cout << ls(a, n) << '\n';
	return 0;
}
