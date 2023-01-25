#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bin_search_rec(vector<int> arr, int x) {
	int lo = 0;
	int hi = arr.size() - 1;

	if (lo < hi) {
		// find the mid-point
		int mid = floor((lo + hi) / 2);

		vector<int> first_half;
		vector<int> second_half;

		for (int i = 0; i < mid; i++) {
			first_half.push_back(arr[i]);
		}

		for (int j = mid; j < arr.size(); j++) {
			second_half.push_back(arr[j]);
		}

		if (arr[mid] > x) {
			return bin_search_rec(first_half, x);
		}

		else if (arr[mid] < x) {
			return bin_search_rec(second_half, x);
		}
		
		else {
			return mid;
		}
	}

	return -1;
	
}	


int main() {
	vector<int> arr {1,2,3,4,5,6,7};
	int x = 5;

	cout << bin_search_rec(arr, x) << '\n';

	return 0;
}
