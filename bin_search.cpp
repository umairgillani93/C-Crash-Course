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

int main() {

	vector<int> v {1,2,3,4,5,6};
	int n = 7;

	cout << bin_search_iter(v, n) << '\n';

	return 0;

}
