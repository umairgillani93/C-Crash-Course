#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int x) {
	int lo = 0;
	int hi = arr.size() - 1;

	while (lo <= hi) {
		int mid = floor((lo + hi) / 2);

		if (arr[mid] > x) {
			hi = mid - 1;
		}

		else if (arr[mid] < x) {
			lo = mid + 1;
		}

		else {
			return mid;
		}
	}

	return -1;
		
}

int bin_search_rec(vector<int> arr, int x) {
	// performs binary search recursive
	
	int lo = 0;
	int hi = arr.size() - 1;
	
	if (lo < hi) {
		int mid = floor((lo + hi) / 2);

		vector<int> left;
		vector<int> right;

		for (int i = 0; i < mid; i++) {
			
		}

		if (arr[mid] < x) {
			
		}
	}
}

int main() {

	int n;
	cin >> n;
	vector<int> v {1,2,3,4,5};

	cout << binary_search(v, n) << '\n';
	return 0;

}


