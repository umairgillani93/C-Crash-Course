#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bin_search_iter(vector<int> new_arr, int x) {
	int lo = 0;
	int hi = new_arr.size() - 1;

	while (lo <= hi) {
		int mid = floor((lo + hi) / 2);
		if (new_arr[mid] > x) {
			hi = mid - 1;
		}

		else if (new_arr[mid] < x) {
			lo = mid + 1;
		}

		else {
			return mid;
		}
	}

	return -1;
}

int bin_search_rec(int lo, int hi, int x) {

	vector<int> A {1,2,3,4,5,6};
	if (lo == hi) {
		if (A[lo] == x) {
			return lo;
		}
		else {return 0;}
	}

	else {
		int mid;
		mid = floor((lo + hi) / 2);

		if (x == A[mid]) {
			return mid;
		}

		else if (x < A[mid]) {
			return bin_search_rec(lo, mid - 1, x);
		}
		
		else {
			return bin_search_rec(mid + 1, hi, x);
		}
	}

	return 0;

}


int main() {

	vector<int> A{1,2,3,4,5};
	int lo = 0;
	int hi = A.size() - 1;
	int x = 0;

	//cout << bin_search_iter(v, n) << '\n';
	
	cout << bin_search_rec(lo, hi, x) << '\n';

	return 0;

}
