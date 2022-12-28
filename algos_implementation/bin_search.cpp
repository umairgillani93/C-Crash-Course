#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int bsi(vector<int> arr, int low, int high, int x) {
	int mid;
	mid = low + (low + high) / 2;
	while (low <= high) {
		if (arr[mid] == x) {
			return mid;
		}
		if (arr[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid -1;
		}
		
	}
	return -1;
}


int main() {
	int n;
	n = 3;
	vector<int> v {1,2,3,4,5};

	cout << bsi(v, 0, 9, 8) << '\n';
	return 0;

}


