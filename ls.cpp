#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int linear_search(int arr[], int x) {
	// seaches 'x' in passed array, and if 'x' is present, returns the index of 'x'
	
	int i = 0;

	while (i < arr.size) {
		if (arr[i] == x) {
			return i;
		}
		else {
			i++;
		}
	}

	return -1;


}

int main() {
	int arr[] = {1, 2, 8, 7, 11, 13, 36};

	int ans = linear_search(arr);

	cout << ans << '\n';
	return 0;
}
